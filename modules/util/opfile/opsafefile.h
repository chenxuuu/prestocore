/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 1995-2006 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
*/

#ifndef MODULES_UTIL_OPFILE_OPSAFEFILE_H
#define MODULES_UTIL_OPFILE_OPSAFEFILE_H

#include "modules/util/opfile/opfile.h"

/**
 * OpSafeFile is used for creating a temporary file which is
 * modified instead of the original. When this object is destructed
 * the temporary file replaces the original.
 *
 * The temporary file created is empty.
 *
 * If any error occures the original file remaines as it is.
 *
 * The temporary file is always deleted when the object is destructed.
 */
class OpSafeFile : public OpFile
{
public:
	OpSafeFile() : m_original_file_is_copy(FALSE) {}

	/**
	 * If SafeClose has not been called the temporary file is just
	 * closed and deleted and the original file is not changed.
	 */
	virtual ~OpSafeFile();

	virtual OpFileType Type() const { return OPSAFEFILE; }
	virtual BOOL IsWritable() const { return m_original_file.IsWritable(); }

	/**
	 * Constructs a temporary file associated with an original given
	 * by a path.
	 *
	 * The temporary file is not opened.
	 *
	 * @return OpStatus::ERR_NO_MEMORY if the was not enough memory to
	 * construct the original file. OpStatus::ERR if there was other
	 * problems with constructing the original file or with creating a
	 * temporary file. Otherwise OpStatus::OK.
	 */
	virtual OP_STATUS Construct(const OpStringC& path, OpFileFolder folder=OPFILE_ABSOLUTE_FOLDER, int flags=OPFILE_FLAGS_NONE);

	/**
	 * Constructs a temporary file associated with an original given
	 * by a OpFile object.
	 *
	 * The temporary file is not opened.
	 *
	 * @return OpStatus::ERR_NO_MEMORY if the was not enough memory to
	 * construct the original file. OpStatus::ERR if there was other
	 * problems with constructing the original file or with creating a
	 * temporary file. Otherwise OpStatus::OK.
	 */
	OP_STATUS Construct(OpFile* file);

	/**
	 * Both the original file and the temporary files are closed with
	 * SafeClose and then the original file is replaced by the
	 * temporary file. Then the temporary file is deleted.
	 */
	virtual OP_STATUS SafeClose();

	/**
	 * Both the original file and the temporary files are closed with
	 * Close and then the original file is replaced by the
	 * temporary file. Then the temporary file is deleted.
	 * This differs from SafeClose() in that it calls regular Close()
	 * on the underlying OpLowLevelFile instances instead of SafeClose().
	 * This is (much) more efficient, particularly on files that are written
	 * often. Please refer to the OpLowLevelFile documentation for the
	 * differences between Close() and SafeClose().
	 */
	virtual OP_STATUS Close();

private:
	OpFile m_original_file;
	BOOL m_original_file_is_copy;
};

#endif // !MODULES_UTIL_OPFILE_OPSAFEFILE_H
