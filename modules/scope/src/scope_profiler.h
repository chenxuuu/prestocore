/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2011 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef SCOPE_PROFILER_H
#define SCOPE_PROFILER_H

#ifdef SCOPE_PROFILER

#include "modules/scope/src/scope_service.h"
#include "modules/scope/src/scope_idtable.h"
#include "modules/scope/src/generated/g_scope_profiler_interface.h"
#include "modules/scope/scope_document_listener.h"
#include "modules/probetools/probetimeline.h"
#include "modules/ecmascript_utils/essched.h"

class OpEventTimeline;
class Window;
class FramesDocument;
class OpSelectorEvent;
class DocumentMananager;

class OpScopeProfiler
	: public OpScopeProfiler_SI
	, public MessageObject
{
public:

	OpScopeProfiler();
	virtual ~OpScopeProfiler();

	OP_STATUS Construct(OpScopeIDTable<DocumentManager> *frame_ids);

	// OpScopeService
	virtual OP_STATUS OnServiceDisabled();

	// DocumentListener.
	OP_STATUS OnAboutToLoadDocument(DocumentManager *docman, const OpScopeDocumentListener::AboutToLoadDocumentArgs &args);

	// MessageObject
	void HandleCallback(OpMessage msg, MH_PARAM_1 par1, MH_PARAM_2 par2);

	// OpScopeProfiler_SI
	virtual OP_STATUS DoStartProfiler(const StartProfilerArg &in, SessionID &out);
	virtual OP_STATUS DoReleaseSession(const ReleaseSessionArg &in);
	virtual OP_STATUS DoStopProfiler(const StopProfilerArg &in, unsigned int async_tag);
	virtual OP_STATUS DoGetEvents(const GetEventsArg &in, unsigned int async_tag);

private:

	// Forward declarations.
	class FrameTimeline;
	class InternalSession;
	class AsyncTask;
	class AggregationTask;
	class ProbeEventFilter;
	class IterationOptions;
	class GetEventsTask;
	class GetAllEventsTask;
	class ReduceUniqueTypesTask;
	class ReduceUniqueEventsTask;
	class ReduceAllEventsTask;

	// Friends.
	friend class FrameTimeline;
	friend class InternalSession;
	friend class AsyncTask;
	friend class AggregationTask;
	friend class ProbeEventFilter;
	friend class IterationOptions;
	friend class GetEventsTask;
	friend class GetAllEventsTask;
	friend class ReduceUniqueTypesTask;
	friend class ReduceUniqueEventsTask;
	friend class ReduceAllEventsTask;

	/**
	 * Check whether the specified DocumentManager is part of a Window
	 * undergoing profiling.
	 *
	 * @param docman The DocumentManager to check.
	 * @return TRUE if the DocumentManager is accepted. FALSE otherwise.
	 */
	BOOL AcceptDocumentManager(DocumentManager *docman);

	/**
	 * Start profiling. Assumes 'current_session' has been set. Will unset
	 * 'current_session' if profiling could not be started.
	 *
	 * @return OpStatus::OK on success; OpStatus::ERR if profiling could
	 *         not be started; or OpStatus::ERR_NO_MEMORY.
	 */
	OP_STATUS StartProfiling();

	/**
	 * Stop profiling. If we are not currently profiling, nothing happens.
	 */
	void StopProfiling();

	// Setters for generated classes:
	OP_STATUS ExportSession(Session &out, unsigned session_id) const;

	// ID <-> Object converters:
	OP_STATUS GetSession(unsigned id, InternalSession *&session) const;
	OP_STATUS GetSessionID(InternalSession *session, unsigned &id);
	OP_STATUS GetTimeline(unsigned session_id, unsigned timeline_id, FrameTimeline *&timeline);
	OP_STATUS GetFrameID(DocumentManager *docman, unsigned &id);
	OP_STATUS GetWindow(unsigned id, Window *&window);

	// We don't use OpScopeIDTable for timeline IDs, so that can't fail.
	unsigned NextTimelineID() { return ++next_timeline_id; }

	/**
	 * Perform the specified task. The task may finish immediately, or
	 * it may finish in a later timeslice. In either case, ownership
	 * of the task is immediately transferred, regardless of return vaule.
	 *
	 * @param task The task to perform. Ownership transferred immediately.
	 * @return OpStatus::OK, OpStatus::ERR or OpStatus::ERR_NO_MEMORY.
	 */
	OP_STATUS PerformTask(AsyncTask *task);

	/**
	 * This class is used by to store Scope-specific data on the timeline. It
	 * is undesireable to store this information directly on OpProbeTimeline,
	 * because only Scope needs it.
	 */
	class FrameTimeline
		: public OpProbeTimeline
		, public ListElement<FrameTimeline>
	{
	public:

		/**
		 * Constructor. Initializes members.
		 */
		FrameTimeline(unsigned timeline_id, unsigned frame_id)
			: timeline_id(timeline_id), frame_id(frame_id) {}

		/**
		 * Get the ID for this timeline. This timeline is generated by the
		 * profiler incrementally (not by a ScopeIDTable).
		 *
		 * @return The (nonzero) ID for this table.
		 */
		unsigned GetTimelineID() const { return timeline_id; }

		/**
		 * Get the ID for the frame (DocumentManager) associated with this
		 * timeline. This ID is generated by a ScopeIDTable.
		 *
		 * @return The (nonzero) ID for the frame.
		 */
		unsigned GetFrameID() const { return frame_id; }

	private:

		// Nonzero ID of this timeline.
		unsigned timeline_id;

		// Nonzero ID of the associated frame.
		unsigned frame_id;
	};

	/**
	 * Used to represent a profiling session internally.
	 */
	class InternalSession
		: public OpProfilingSession
	{
	public:

		/**
		 * Construct a new Session.
		 *
		 * @param profiler The OpScopeProfiler that owns this session.
		 * @param window_id The ID of the Window this session is for.
		 * @param start_on_load TRUE if this profile should be started on the
		 *                      next URL load.
		 */
		InternalSession(OpScopeProfiler *profiler, unsigned window_id, BOOL start_on_load);

		// Implements OpProfilingSession.
		virtual OpProbeTimeline *AddTimeline(DocumentManager *docman);

		/**
		 * Check whether this profile should start when a URL is loaded in
		 * in the associated window.
		 *
		 * @return TRUE if the profile should start on the next load, FALSE
		           otherwise.
		 */
		BOOL GetStartOnLoad() const;

		/**
		 * Set the flag which indicates whether profiling should start on
		 * the next URL load.
		 *
		 * @param start_on_load TRUE if the profile should start on the
		 *                      next load, FALSE otherwise.
		 */
		void SetStartOnLoad(BOOL start_on_load);

		/**
		 * Get the ID of the Window associated with this profile.
		 *
		 * @return The nonzero ID of the Window associated with the profile.
		 */
		unsigned GetWindowID() const;

		/**
		 * Aggregate this profile for a while. This function operates across
		 * timelines.
		 *
		 * @param iterations The (max number of events to aggregate).
		 * @return OpStatus::OK if the specified number of iterations were
		 *         performed (or if there were no more events to aggregate).
		 *         To check if aggregation finished, use IsAggregationFinished.
		 *         Otherwise, OpStatus::ERR_NO_MEMORY.
		 *
		 * @see IsAggregationFinished
		 */
		OP_STATUS Aggregate(int iterations);

		/**
		 * Check whether aggregation has finished for this profile.
		 *
		 * @return TRUE if finished, FALSE if not.
		 */
		BOOL IsAggregationFinished();

		/**
		 * Add a timeline to the list of timelines.
		 *
		 * @param timeline The timeline to add. NULL not allowed.
		 */
		void AddTimeline(FrameTimeline *timeline);

		/**
		 * Get the timeline with the specified ID.
		 *
		 * @param timeline_id The ID of the timeline to get.
		 * @return A timeline, or NULL if there is no timeline with that ID.
		 */
		FrameTimeline *GetTimeline(unsigned timeline_id);

		/**
		 * Get the first timeline in the list of timelines.
		 *
		 * @return A timeline, or NULL if the list is empty.
		 */
		FrameTimeline *FirstTimeline();

		/**
		 * Called when profiling started.
		 */
		void OnStart();

		/**
		 * Called when profiling stopped.
		 */
		void OnStop();

		/**
		 * Check whether process time reporting is supported.
		 *
		 * @return OpStatus::OK if supported. Any other value means the data
		 *         is not available.
		 */
		OP_STATUS IsProcessTimeSupported() const { return os_process_status; }

		/**
		 * Get the time spent executing this process, as reported by the
		 * by the OS.
		 *
		 * @return The time spent executing this process.
		 */
		double GetProcessTime() const { return os_process_time_stop - os_process_time_start; }

	private:

		// The owner of this session.
		OpScopeProfiler *profiler;

		// TRUE if the next OnAboutToLoadDocument will cause this profile to start.
		BOOL start_on_load;

		// The Window this profile is for.
		unsigned window_id;

		// The timeline the aggregation iterator is currently poiting at, or
		// NULL if aggregation has not started.
		FrameTimeline *current_timeline;

		// All frames observed on this Window.
		AutoDeleteList<FrameTimeline> frame_timelines;

		// The execution time, as reported by the OS (at the time profiling is
		// started).
		double os_process_time_start;
		double os_process_time_stop;
		OP_STATUS os_process_status;
	};

	/**
	 * A generic asynchronous task that can be performed over several
	 * time slices.
	 */
	class AsyncTask
		: public ListElement<AsyncTask>
	{
	public:
		/**
		 * Construct a new asynchronous task.
		 *
		 * @param session_id The ID of the session the task will operate on.
		 * @param async_tag The tag which must used when sending the response.
		 */
		AsyncTask(unsigned session_id, unsigned async_tag);

		/**
		 * Destructor. Removes this object from its parent list.
		 */
		virtual ~AsyncTask();

		/**
		 * @return The session ID associated with this task.
		 */
		unsigned GetSessionID() const { return session_id; }

		/**
		 * Get the tag which must be used when sending the response.
		 *
		 * @return The tag.
		 */
		unsigned GetAsyncTag() const { return async_tag; }

		/**
		 * Post a message which causes the task to be resumed later. This may
		 * called by subclasses if the task could not finish in a given time
		 * slice.
		 *
		 * @return TRUE if the message was posted, FALSE on OOM.
		 */
		BOOL PostMessage();

		/**
		 * The task is performed in an implemenation of this function.
		 *
		 * @param [in] profiler The profiler that owns the task.
		 * @param [out] finished Set to TRUE if the task was finished.
		 * @return OpStatus::OK if the task (partially) completed without
		 *         errors. OpStatus::ERR_NO_MEMORY otherwise.
		 */
		virtual OP_STATUS Perform(OpScopeProfiler *profiler, BOOL &finished) = 0;

	private:

		// The session this task operates on.
		unsigned session_id;

		// The tag to use for the response.
		unsigned async_tag;
	};

	/**
	 * This task aggregates all events in each timeline in a profile.
	 * Aggregation means combining values from child events into parent events.
	 *
	 * Aggregated time and overhead information is not valid until aggregation
	 * has been performed.
	 */
	class AggregationTask
		: public AsyncTask
	{
	public:
		/**
		 * Construct a new aggregation task.
		 *
		 * @param session_id The ID of the session the task will operate on.
		 * @param async_tag The tag which must used when sending the response.
		 */
		AggregationTask(unsigned session_id, unsigned async_tag);

		// AsyncTask
		virtual OP_STATUS Perform(OpScopeProfiler *profiler, BOOL &finished);
	};

	/**
	 * This class helps implement the feature where only some event types
	 * are included in the iteration.
	 *
	 * @see DoGetEvents
	 */
	class ProbeEventFilter
	{
	public:
		/**
		 * Creates default filter, where all event types are included.
		 */
		ProbeEventFilter();

		/**
		 * Set the same include state for all event types.
		 *
		 * @param value The value to set for all event types. TRUE means
		 *              all events should be included. FALSE means all
		 *              events should be excluded.
		 */
		void SetAll(BOOL value);

		/**
		 * Change the include state for one event type.
		 *
		 * @param type The event type to change state for.
		 * @param value The value to set for this event type. TRUE means
		 *              all events should be included. FALSE means all
		 *              events should be excluded.
		 */
		void SetInclude(OpProbeEventType type, BOOL value);

		/**
		 * Check whether this filter includes the specified Event.
		 *
		 * @param event The Event that may or may not be included in the filter.
		 * @return TRUE if the event should be included. FALSE otherwise.
		 */
		BOOL Includes(const OpProbeTimeline::Event &event) const;

	private:

		// Stores the include states.
		BOOL filter[PROBE_EVENT_COUNT];
	};

	/**
	 * This is used by GetEventsTasks, to help decide which Events should
	 * be part of the iteration.
	 */
	class IterationOptions
	{
	public:
	
		/**
		 * Construct a new IterationOptions object.
		 *
		 * The constructor will set all members based on the arguments.
		 *
		 * @param timeline The FrameTimeline that the 'GetEventsTask' applies to.
		 * @param arg The generated argument for the Scope command.
		 */
		IterationOptions(FrameTimeline *timeline, const GetEventsArg &arg);

		/**
		 * @return The root of the iteration.
		 */
		OpProbeTimeline::Event *GetRoot() const { return root; }

		/**
		 * @return The (relative) max depth of the iteration.
		 */
		unsigned GetMaxDepth() const { return max_depth; };

		/**
		 * @return The type filter. Only types included in the filter will be
		 *         part of the iteration.
		 */
		const ProbeEventFilter &GetFilter() const { return filter; }

		/**
		 * @return The (left-right) interval of the iteration. Only types
		 *         inside the interval will be included in the iteration.
		 */
		const Interval &GetInterval() const { return interval; }

	private:

		// The 'root' of the iteration. Only children of this Event will be
		// included.
		OpProbeTimeline::Event *root;

		// The (relative) max depth of the iteration. Only Events up to
		// (and including) this depth will be included.
		int max_depth;

		// The type filter. Only the selected types will be included.
		ProbeEventFilter filter;

		// Only events whose intervals overlap this interval will be
		// included.
		Interval interval;
	};

	/**
	 * GetEventsTask takes care of the iteration through a subset of
	 * the events in the timeline, and allow subclasses to define how
	 * to process matching events further.
	 *
	 * This may for instance be used to reduce a set of Events into a
	 * smaller set of 'virtual' Events which represents a summary of
	 * the initial set.
	 */
	class GetEventsTask
		: public AsyncTask
	{
	public:

		/**
		 * Constructs a new 'get events' task.
		 *
		 * @param timeline_id The ID of the timeline we're operating on.
		 * @param session_id The ID of the session the timeline is a part of.
		 * @param async_tag The tag which will be used for the response.
		 * @param options Options for how to perform the iteration.
		 */
		GetEventsTask(unsigned timeline_id, unsigned session_id, unsigned async_tag, const IterationOptions &options);

		// AsyncTask.
		virtual OP_STATUS Perform(OpScopeProfiler *profiler, BOOL &finished);

		/**
		 * Second stage constructor. Creates one (serializable) Event for
		 * each event type.
		 *
		 * @param profiler The profiler that owns the task.
		 * @return OpStatus::OK on success, OpStatus::ERR or OOM.
		 */
		virtual OP_STATUS Construct(OpScopeProfiler *profiler) = 0;

	protected:

		/**
		 * Called when a matching Event is encountered. An Event matches if it
		 * part of the Event subtree as defined by 'root', does not exceed
		 * 'max_depth', matches the filter, and matches the desired interval.
		 *
		 * @param timeline The timeline that owns the event.
		 * @param iterator An iterator which is pointing at the encountered event.
		 * @return OpStatus::OK on success, OpStatus::ERR_NO_MEMORY, or
		 *         OpStatus::ERR on other errors (BadRequest, etc).
		 */
		virtual OP_STATUS OnMatchingEvent(OpProbeTimeline *timeline, const OpProbeTimeline::Iterator &iterator) = 0;

		/**
		 * Check whether the specified iteration options call for the specfied
		 * Event to be excluded.
		 *
		 * @param timeline The timeline that owns the event.
		 * @param event The Event to consider for exclusion.
		 * @return TRUE to exclude, FALSE to include.
		 */
		BOOL IsExcluded(const OpProbeTimeline *timeline, const OpProbeTimeline::Event &event) const;

		/**
		 * Accumulate time and hits information from 'event' into the
		 * according field in 'out'.
		 *
		 * @param timeline The timeline that owns the event.
		 * @param event The event to use as source for the data.
		 * @param out The event to use as destination for the data.
		 * @return OpStatus::OK, or OpStatus::ERR_NO_MEMORY.
		 */
		OP_STATUS AccumulateEventData(const OpProbeTimeline *timeline, const OpProbeTimeline::Event &event, Event &out);

		// The id of the timeline that owns the event.
		unsigned timeline_id;

		// The response message.
		Events events;

		// Used to traverse all events in the timeline.
		OpProbeTimeline::Iterator iterator;

		// Only include Events that match these options.
		IterationOptions options;
	};

	/**
	 * This task simply serializes all Events without doing any form of
	 * reduction or processing.
	 */
	class GetAllEventsTask
		: public GetEventsTask
	{
	public:

		/**
		 * Constructs a new GetAllEventsTask.
		 *
		 * @see GetEventsTask
		 */
		GetAllEventsTask(unsigned timeline_id, unsigned session_id, unsigned async_tag, const IterationOptions &options);

		// GetEventsTask.
		virtual OP_STATUS Construct(OpScopeProfiler *profiler) { return OpStatus::OK; }

	protected:

		// GetEventsTask.
		virtual OP_STATUS OnMatchingEvent(OpProbeTimeline *timeline, const OpProbeTimeline::Iterator &iterator);
	};

	/**
	 * A task whick reduces a set of Events into one virtual event
	 * for each type. This yields per-type time and hit information.
	 */
	class ReduceUniqueTypesTask
		: public GetEventsTask
	{
	public:

		/**
		 * Constructs a new ReduceUniqueTypesTask.
		 *
		 * @see GetEventsTask
		 */
		ReduceUniqueTypesTask(unsigned timeline_id, unsigned session_id, unsigned async_tag, const IterationOptions &options);

		// GetEventsTask.
		virtual OP_STATUS Construct(OpScopeProfiler *profiler);

	protected:

		// GetEventsTask.
		virtual OP_STATUS OnMatchingEvent(OpProbeTimeline *timeline, const OpProbeTimeline::Iterator &iterator);

	private:

		/**
		 * For an internal event type, return another event type which is
		 * guaranteed to have an external represenation of the protocol.
		 *
		 * This is required, because there is not necessarily an external
		 * version of a certain internal enum value (that is, there may
		 * more internal values than external values).
		 *
		 * @param type The incoming evenet type.
		 * @return An internal event type which has an external representation.
		 */
		static OpProbeEventType GetValidType(OpProbeEventType type);

		// Provides random access for the virtual event for any event type.
		Event *uniqueTypes[PROBE_EVENT_COUNT];
	};

	/**
	 * A task which reduces a set of events, into a set of one 'unique' events,
	 * that is, all events that are 'equal' are collapsed into the same virtual
	 * event. Two events are equal if their types are equal, and if they have
	 * the same type-specific data (such as selector text for selector matching
	 * probes).
	 */
	class ReduceUniqueEventsTask
		: public GetEventsTask
	{
	public:
		/**
		 * Constructs a new ReduceUniqueEventsTask.
		 *
		 * @see GetEventsTask
		 */
		ReduceUniqueEventsTask(unsigned timeline_id, unsigned session_id, unsigned async_tag, const IterationOptions &options);

		// GetEventsTask.
		virtual OP_STATUS Construct(OpScopeProfiler *profiler) { return OpStatus::OK; }

	protected:

		// GetEventsTask.
		virtual OP_STATUS OnMatchingEvent(OpProbeTimeline *timeline, const OpProbeTimeline::Iterator &iterator);

	private:

		/**
		 * Convert an event into a string representation. This string
		 * determines whether two events are equal or not, together
		 * with the event type.
		 *
		 * @param timeline The timeline that owns the event.
		 * @param event The event to convert to a string.
		 * @return A string representation of the event. The string is
		 *         managed by the timeline, and becomes invalid once
		 *         the parent timeline is destroyed. NULL on OOM.
		 */
		static const uni_char *ToString(OpProbeTimeline *timeline, const OpProbeTimeline::Event &event);

		/**
		 * Join the properties of an event into a (internalized) string, where
		 * each value is separated by a comma.
		 *
		 * @param timeline The timeline that owns the event.
		 * @param event The event that contains the properties to convert.
		 * @return A string representation of the properties. The string is
		 *         managed by the timeline, and becomes invalid once
		 *         the parent timeline is destroyed. NULL on OOM.
		 */
		static const uni_char *JoinProperties(OpProbeTimeline *timeline, const OpProbeTimeline::Event &event);

		/**
		 * Get the string contained in a named property. NULL is returned
		 * if no property exists with that name, or the property is not
		 * of the correct type.
		 *
		 * @param name The name of the property.
		 * @param event The Event that contains the property.
		 * @return The string contained within the property, or NULL if
		 *         no property exists with that name.
		 */
		static const uni_char *GetStringProperty(const char *name, const OpProbeTimeline::Event &event);

		// Stores the string versions of events.
		OpStringHashTable<Event> uniqueEvents[PROBE_EVENT_COUNT];
	};

	/**
	 * This task reduces all selected events into a single virtual event,
	 * which then represents the summary of all the selected events.
	 *
	 * It may also add information about the total execution time as reported
	 * by the operating system, if this is supported by the build.
	 */
	class ReduceAllEventsTask
		: public GetEventsTask
	{
	public:

		/**
		 * Constructs a new ReduceAllEventsTask.
		 *
		 * @see GetEventsTask
		 */
		ReduceAllEventsTask(unsigned timeline_id, unsigned session_id, unsigned async_tag, const IterationOptions &options);

		// GetEventsTask.
		virtual OP_STATUS Construct(OpScopeProfiler *profiler);

	protected:

		// GetEventsTask.
		virtual OP_STATUS OnMatchingEvent(OpProbeTimeline *timeline, const OpProbeTimeline::Iterator &iterator);
	
	private:

		// The one virtual Event that represents contains accumulated data
		// from all Events. Owned by by 'events', which is found in the
		// superclass.
		Event *all;
	};

	// If we are currently profiling, this pointer will be set.
	InternalSession *current_session;

	// A list of all ongoing asynchronous task.
	AutoDeleteList<AsyncTask> async_tasks;

	// Manages session IDs.
	OpScopeAutoIDTable<InternalSession> session_ids;

	// Foreign ID table for frames.
	// @see OpScopeDocumentManager.
	OpScopeIDTable<DocumentManager> *frame_ids;

	// Stores the next available timeline ID. (Never zero).
	unsigned next_timeline_id;

}; // OpScopeProfiler

#endif // SCOPE_PROFILER
#endif // SCOPE_PROFILER_H
