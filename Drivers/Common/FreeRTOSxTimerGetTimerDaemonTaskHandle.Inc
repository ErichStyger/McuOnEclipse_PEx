%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerGetTimerDaemonTaskHandle)
%;**     Description :
%;**         INCLUDE_xTimerGetTimerDaemonTaskHandle and configUSE_TIMERS
%;**         must both be set to 1 in FreeRTOSConfig.h for
%;**         xTimerGetTimerDaemonTaskHandle() to be available. 
%include Common\GeneralParametersNone.inc
%;**     Returns     :
%;**         ---%RetVal %>27 - Returns the task handle associated with
%;** %>29 the software timer daemon (or service) task.
%;** %>29 If configUSE_TIMERS is set to 1 in
%;** %>29 FreeRTOSConfig.h, then the timer daemon
%;** %>29 task is created automatically when the RTOS
%;** %>29 scheduler is started. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine