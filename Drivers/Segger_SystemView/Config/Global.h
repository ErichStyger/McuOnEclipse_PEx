/*********************************************************************
*                    SEGGER Microcontroller GmbH                     *
*                        The Embedded Experts                        *
**********************************************************************
*                                                                    *
*            (c) 1995 - 2018 SEGGER Microcontroller GmbH             *
*                                                                    *
*       www.segger.com     Support: support@segger.com               *
*                                                                    *
**********************************************************************
*                                                                    *
*       SEGGER SystemView * Real-time application analysis           *
*                                                                    *
**********************************************************************
*                                                                    *
* All rights reserved.                                               *
*                                                                    *
* SEGGER strongly recommends to not make any changes                 *
* to or modify the source code of this software in order to stay     *
* compatible with the RTT protocol and J-Link.                       *
*                                                                    *
* Redistribution and use in source and binary forms, with or         *
* without modification, are permitted provided that the following    *
* conditions are met:                                                *
*                                                                    *
* o Redistributions of source code must retain the above copyright   *
*   notice, this list of conditions and the following disclaimer.    *
*                                                                    *
* o Redistributions in binary form must reproduce the above          *
*   copyright notice, this list of conditions and the following      *
*   disclaimer in the documentation and/or other materials provided  *
*   with the distribution.                                           *
*                                                                    *
* o Neither the name of SEGGER Microcontroller GmbH         *
*   nor the names of its contributors may be used to endorse or      *
*   promote products derived from this software without specific     *
*   prior written permission.                                        *
*                                                                    *
* THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND             *
* CONTRIBUTORS "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES,        *
* INCLUDING, BUT NOT LIMITED TO, THE IMPLIED WARRANTIES OF           *
* MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE           *
* DISCLAIMED. IN NO EVENT SHALL SEGGER Microcontroller BE LIABLE FOR *
* ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR           *
* CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT  *
* OF SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS;    *
* OR BUSINESS INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF      *
* LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY, OR TORT          *
* (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE  *
* USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH   *
* DAMAGE.                                                            *
*                                                                    *
**********************************************************************
*                                                                    *
*       SystemView version: V2.52b                                    *
*                                                                    *
**********************************************************************
----------------------------------------------------------------------
File    : GLOBAL.h
Purpose : Global types etc.
---------------------------END-OF-HEADER------------------------------
*/

#ifndef GLOBAL_H            // Guard against multiple inclusion
#define GLOBAL_H

#include <string.h>         // For memset
#include "TYPES.h"          // Defines standard data types

/*********************************************************************
*
*       Defines, function replacements
*
**********************************************************************
*/

#ifdef WIN32
  #if _MSC_VER > 1300
    #define IS_MSC2010  1
  #else
    #define IS_MSC2010  0
  #endif
#else
  #define IS_MSC2010  0
#endif

#ifndef   COUNTOF
  #define COUNTOF(a)    (sizeof(a)/sizeof(a[0]))
#endif

#ifndef   ZEROFILL
  #define ZEROFILL(Obj) memset(&Obj, 0, sizeof(Obj))
#endif

#ifndef   LIMIT
  #define LIMIT(a,b)    if (a > b) a = b;
#endif

#ifndef   MIN
  #define MIN(a, b)     (((a) < (b)) ? (a) : (b))
#endif

#ifndef   MAX
  #define MAX(a, b)     (((a) > (b)) ? (a) : (b))
#endif

#ifndef   ABS
  #define ABS(a)        (((a) < 0) ? -(a) : (a))
#endif

/*********************************************************************
*
*       Types, internal
*
**********************************************************************
*/

typedef enum {IS_NOINIT, IS_RUNNING, IS_EXIT} INIT_STATE;

#endif                      // Avoid multiple inclusion

/*************************** End of file ****************************/
