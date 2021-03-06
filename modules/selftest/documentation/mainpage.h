/* -*- Mode: c++; tab-width: 4; indent-tabs-mode: t; c-basic-offset: 4 -*-
**
** Copyright (C) 2007 Opera Software AS.  All rights reserved.
**
** This file is part of the Opera web browser.  It may not be distributed
** under any circumstances.
**
*/

/** @mainpage Selftest module
 *
 * This is the autogenerated documentation for the selftest module. For more information
 * about this module see the <a href="http://wiki.oslo.opera.com/developerwiki/index.php/Modules/selftest">Wiki page</a>
 * or the <a href="../index.html">Selftest documentation</a>.
 *
 * @section overview Overview
 *
 * The selftest module contains code for running tests generated by the selftest parser. For information on how to use
 * selftest see <a href="../internals.html">The internals of the selftest system</a>.
 * 
 * @section api API
 *
 * The selftest module maily consist of the classes TestSuite, TestUtils and Testgroups. The selftest module is responsible for 
 * creating and destroying them. They can be globally accessed through pointers held by the selftest module.
 *
 * <ul>
 * <li>	
 *	The TestSuite class is the main external API for selftest. It contains methods for initializing, running and destroying
 *	test suite
 * </li>
 * <li>
 *  The TestUtils class is the API towards the generated test. It contains methods needed to run the various types of tests.
 * </li>
 * <li>
 *  The TestGroups class is generated by the selftest parser. It holds information about the tests and methods to construct them.
 * </li>
 * </ul> 
 *
 */
