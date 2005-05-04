/* Copyright 2003-2005 The Apache Software Foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */


#ifndef LOG4CXX_PRIVATE_LOG4CXX_H
#define LOG4CXX_PRIVATE_LOG4CXX_H

/* GENERATED FILE WARNING!  DO NOT EDIT log4cxx.h
 *
 * You must modify log4cxx.h.in instead.
 *
 */

#include <log4cxx/log4cxx.h>

#if !defined(LOG4CXX) && !defined(LOG4CXX_TEST)
#error "log4cxx/private/log4cxx.h should only be used within log4cxx implementation or tests"
#endif


#define LOG4CXX_HAS_STD_LOCALE 1
#define LOG4CXX_HAS_STD_WLOCALE 1


#define LOG4CXX_RETURN_AFTER_THROW 0

#define LOG4CXX_HAS_STD_WCOUT 1
#define LOG4CXX_HAS_STD_WLOCALE 1

typedef long long log4cxx_int64_t;
typedef log4cxx_int64_t log4cxx_time_t;
typedef int log4cxx_status_t;

//
//   unsigned int same size as void*
//
typedef unsigned int log4cxx_intptr_t;

#define LOG4CXX_EXPORT

//
//   Capabilities should be checked in client code by
//       attempting creation of the corresponding appender
#define LOG4CXX_HAVE_XML 1
#define LOG4CXX_HAVE_SMTP 0
#define LOG4CXX_HAVE_SYSLOG 1



#endif
