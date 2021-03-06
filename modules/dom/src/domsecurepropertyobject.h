/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
 *
 * Copyright (C) 1995-2009 Opera Software ASA.  All rights reserved.
 *
 * This file is part of the Opera web browser.  It may not be distributed
 * under any circumstances.
 */

#ifndef DOM_DOMSECUREOBJECT_H
#define DOM_DOMSECUREOBJECT_H

#include "modules/dom/src/dominternaltypes.h"
#ifdef DOM_ACCESS_SECURITY_RULES

#include "modules/dom/src/domobj.h"

/** A class for objects having additionally secured access to properties.
 *
 * The protected methods InternalGetName and InternalPutName should be
 * implemented instead of the usual GetName, GetNameRestart, PutName
 * and PutNameRestart.
 *
 * The security check is performed by DOM_Object::PropertyAccessSecurityCheck
 * with ACCESS_TYPE_PROPERTY_ACCESS access type.
 * Operation names for are generated by GetOperationName.
 */
class DOM_SecurePropertyObject : public DOM_Object
{
public:
	/**
	 * Provides access to value of a property.
	 *
	 * Do not override this method, see InternalGetName.
	 *
	 * GetName and GetNameRestart perform three steps:
	 * -# Check security conditions,
	 * -# Retrieve property value with the help of InternalGetName,
	 * -# Call superclass' GetName/GetNameRestart as a last resort (if InternalGet* don't provide a value).
	 *
	 * @see InternalGetName
	 */
	virtual ES_GetState GetName(const uni_char* property_name, int property_code, ES_Value* value, ES_Runtime* origining_runtime)
	{
		return CallGet(static_cast<OpAtom>(property_code), value, origining_runtime, NULL);
	}

	virtual ES_GetState GetName(OpAtom property_code, ES_Value* value, ES_Runtime* origining_runtime)
	{
		return CallGet(property_code, value, origining_runtime, NULL);
	}

	/**
	 * Second stage of property access.
	 *
	 * Do not override this method, see InternalGetName.
	 */
	virtual ES_GetState GetNameRestart(const uni_char* property_name, int property_code, ES_Value* value, ES_Runtime* origining_runtime, ES_Object* restart_object)
	{
		return CallGet(static_cast<OpAtom>(property_code), value, origining_runtime, restart_object);
	}

	virtual ES_GetState GetNameRestart(OpAtom property_atom, ES_Value* value, ES_Runtime* origining_runtime, ES_Object* restart_object)
	{
		return CallGet(property_atom, value, origining_runtime, restart_object);
	}

	virtual ES_PutState PutName(const uni_char* property_name, int property_code, ES_Value* value, ES_Runtime* origining_runtime)
	{
		return CallPut(static_cast<OpAtom>(property_code), value, origining_runtime, NULL);
	}

	virtual ES_PutState PutName(OpAtom property_code, ES_Value* value, ES_Runtime* origining_runtime)
	{
		return CallPut(property_code, value, origining_runtime, NULL);
	}

	virtual ES_PutState PutNameRestart(const uni_char* property_name, int property_code, ES_Value* value, ES_Runtime* origining_runtime, ES_Object* restart_object)
	{
		return CallPut(static_cast<OpAtom>(property_code), value, origining_runtime, restart_object);
	}

	virtual ES_PutState PutNameRestart(OpAtom property_code, ES_Value* value, ES_Runtime* origining_runtime, ES_Object* restart_object)
	{
		return CallPut(property_code, value, origining_runtime, restart_object);
	}


protected:
	/**
	 * Creates operation name to be used for finding the security rule to use.
	 *
	 * This implementation generates operation names of the form:
	 * <class-name> . <property_name>
	 * e.g. "Device.totalMemory".
	 *
	 * @param property_name name of the property to be accessed.
	 * @param operation_name set to the name of operation.
	 */
	virtual OP_STATUS GetOperationName(const char* property_name, OpString8* operation_name) const;

	/**
	 * The actual GetName implementation that performs the requested operation.
	 *
	 * It is called only after security checks have been passed.
	 *
	 * The value returned specifies further action.
	 *
	 * - \c GET_SUCCESS - value has been retrieved and placed in \c value,
	 * - \c GET_FAILED - no value retrieved,
	 * - \c GET_SUSPEND - the calling thread is to be suspended. Once it is restarted by the
	 *   operation, it will enter InternalGetName with \c restart_value initialized
	 *   to the value of \c value (only if it is an object).
	 * - \c GET_EXCEPTION - \c value has been set to an exception object,
	 * - \c GET_NO_MEMORY - out-of-memory error,
	 * - \c GET_SECURITY_VIOLATION - permitted but discouraged since security checks are
	 *   performed before calling this method.
	 *
	 * @param property_name name of the requested property. May be NULL if property_atom is assigned.
	 * @param property_atom atom corresponding to the requested property. May be unassigned if property_name is not-NULL.
	 * @param value set to the value of the property. May be NULL. In that case it is just a check for existence of the given property.
	 *        It should be set to a DOM_DeviceApiCallState object if GET_SUSPEND is returned.
	 * @param origining_runtime the runtime.
	 * @param restart_value NULL on first call, call-state object that has been set to \c value if the operation is being restarted.
	 *
	 * @return status of the operation.
	 */
	virtual ES_GetState InternalGetName(OpAtom property_atom, ES_Value* value, DOM_Runtime* origining_runtime, ES_Value* restart_value) { return GET_FAILED; };

	/**
	 * The actual \c PutName implementation that performs the requested operation.
	 *
	 * It is called only after security checks have been passed.
	 *
	 * The value returned specifies further action, they have the same meaning as if returned in regular \c PutName.
	 *
	 * If \c PUT_SUSPEND is returned the calling thread is to be suspended by the function.
	 * Once it is restarted by the operation, it will enter \c InternalPutName with \c restart_value initialized
	 * to the value of \c value (only if it is an object).
	 *
	 * @param property_name name of the property. May be NULL if property_atom is assigned.
	 * @param property_atom atom corresponding to the property. May be unassigned if property_name is not-NULL.
	 * @param value the value to be set. It should be set to a DOM_DeviceApiCallState object if PUT_SUSPEND is returned.
	 * @param origining_runtime the runtime.
	 * @param restart_value NULL on first call, call-state object that has been set to \c value if the operation is being restarted.
	 *
	 * @return status of the operation.
	 */
	virtual ES_PutState InternalPutName(OpAtom property_atom, ES_Value* value, DOM_Runtime* origining_runtime, ES_Value* restart_value) { return PUT_FAILED; };

private:
	int PropertySecurityCheck(OpAtom property_atom, ES_Value* value, DOM_Runtime* origining_runtime, ES_Value* restart_value);

	ES_GetState CallGet(OpAtom property_atom, ES_Value* value, ES_Runtime* origining_runtime, ES_Object* restart_obj);
	ES_PutState CallPut(OpAtom property_atom, ES_Value* value, ES_Runtime* origining_runtime, ES_Object* restart_obj);
};

#endif // DOM_ACCESS_SECURITY_RULES

#endif // DOM_DOMSECUREOBJECT_H
