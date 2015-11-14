/*********************************************************************
*               SEGGER MICROCONTROLLER GmbH & Co. KG                 *
*       Solutions for real time microcontroller applications         *
**********************************************************************
*                                                                    *
*       (c) 2015  SEGGER Microcontroller GmbH & Co. KG               *
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
* * This software may in its unmodified form be freely redistributed *
*   in source form.                                                  *
* * The source code may be modified, provided the source code        *
*   retains the above copyright notice, this list of conditions and  *
*   the following disclaimer.                                        *
* * Modified versions of this software in source or linkable form    *
*   may not be distributed without prior consent of SEGGER.          *
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
*       SystemView version: V2.10                                    *
*                                                                    *
**********************************************************************
-------------------------- END-OF-HEADER -----------------------------

File        : SEGGER_SYSVIEW_Config.c
Purpose     : Setup configuration of SystemView.
*/
#include <stddef.h> /* for NULL */
#include "SEGGER_SYSVIEW.h"
#include "SEGGER_SYSVIEW_Conf.h"

/*********************************************************************
*
*       Defines, configurable
*
**********************************************************************
*/
%if (%CPUDB_prph_has_feature(CPU,SDK_SUPPORT) = 'yes') | (defined(KinetisSDKenabled) & %KinetisSDKenabled='yes') %- TRUE/FALSE not defined for SDK projects
#define SYSVIEW_USING_KINETIS_SDK                                    %>50 1 /* 1: project is a Kinetis SDK Processor Expert project; 0: No Kinetis Processor Expert project */
%else
#define SYSVIEW_USING_KINETIS_SDK                                    %>50 0 /* 1: project is a Kinetis SDK Processor Expert project; 0: No Kinetis Processor Expert project */
%endif

#if !SYSVIEW_USING_KINETIS_SDK
#include "%ProcessorModule.h"
#endif

// The application name to be displayed in SystemViewer
#define SYSVIEW_APP_NAME        %SysViewAppName

// The operating system, if any
%if defined(OperatingSystemId)
#define SYSVIEW_OS_NAME         "%OperatingSystemId"
%else
#define SYSVIEW_OS_NAME         "Bare-metal"
%endif

// The target device name
#define SYSVIEW_DEVICE_NAME     %SysViewDeviceName

// System Frequency. SystemcoreClock is used in most CMSIS compatible projects.
#if SYSVIEW_USING_KINETIS_SDK
  /* The SDK variable SystemCoreClock contains the current clock speed */
  extern unsigned int SystemCoreClock;
  #define SYSVIEW_CPU_FREQ                                       %>50 (SystemCoreClock) /* CPU clock frequency */
#else
  #define SYSVIEW_CPU_FREQ                                       %>50 CPU_CORE_CLK_HZ /* CPU core clock defined in %ProcessorModule.h */
#endif /* SYSVIEW_USING_KINETIS_SDK */

// Frequency of the timestamp. Must match SEGGER_SYSVIEW_Conf.h
#define SYSVIEW_TIMESTAMP_FREQ  (SYSVIEW_CPU_FREQ >> 4)

// The lowest RAM address used for IDs (pointers)
#define SYSVIEW_RAM_BASE        (0x%#l%SysViewRamBase)

#if 1 /* << EST */
#define portNVIC_SYSTICK_LOAD_REG           (*((volatile unsigned long *)0xe000e014)) /* SYST_RVR, SysTick reload value register */
#define portNVIC_SYSTICK_CURRENT_VALUE_REG  (*((volatile unsigned long *)0xe000e018)) /* SYST_CVR, SysTick current value register */

#define TICK_NOF_BITS               24
#define COUNTS_UP                   0 /* SysTick is counting down to zero */
#define SET_TICK_DURATION(val)      portNVIC_SYSTICK_LOAD_REG = val
#define GET_TICK_DURATION()         portNVIC_SYSTICK_LOAD_REG
#define GET_TICK_CURRENT_VAL(addr)  *(addr)=portNVIC_SYSTICK_CURRENT_VALUE_REG


uint32_t SEGGER_uxGetTickCounterValue(void) {
  uint32_t val;

  GET_TICK_CURRENT_VAL(&val);
  return val;
}

#endif

/********************************************************************* 
*
*       _cbSendSystemDesc()
*
*  Function description
*    Sends SystemView description strings.
*/
static void _cbSendSystemDesc(void) {
  SEGGER_SYSVIEW_SendSysDesc("N="SYSVIEW_APP_NAME",O="SYSVIEW_OS_NAME",D="SYSVIEW_DEVICE_NAME);
  SEGGER_SYSVIEW_SendSysDesc("I#15=SysTick");
}

/*********************************************************************
*
*       Global functions
*
**********************************************************************
*/
void SEGGER_SYSVIEW_Conf(void) {
  SEGGER_SYSVIEW_Init(SYSVIEW_TIMESTAMP_FREQ, SYSVIEW_CPU_FREQ, 
                      NULL, _cbSendSystemDesc);
  SEGGER_SYSVIEW_SetRAMBase(SYSVIEW_RAM_BASE);
}

/*************************** End of file ****************************/
