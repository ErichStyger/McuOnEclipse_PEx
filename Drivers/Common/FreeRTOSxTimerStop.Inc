%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerStop)
%;**     Description :
%;**          Timer functionality is provided by a timer service/daemon
%;**         task. Many of the public FreeRTOS timer API functions send
%;**         commands to the timer service task through a queue called
%;**         the timer command queue. The timer command queue is private
%;**         to the RTOS kernel itself and is not directly accessible to
%;**         application code. The length of the timer command queue is
%;**         set by the configTIMER_QUEUE_LENGTH configuration constant.
%;**         xTimerStop() stops a timer that was previously started using
%;**         either of the xTimerStart(), xTimerReset(),
%;**         xTimerStartFromISR(), xTimerResetFromISR(),
%;**         xTimerChangePeriod() and xTimerChangePeriodFromISR() API
%;**         functions.
%;**         Stopping a timer ensures the timer is not in the active
%;**         state.
%;**         The configUSE_TIMERS configuration constant must be set to 1
%;**         for xTimerStop() to be available. 
%include Common\GeneralParameters.inc(27)
%;**         xTimer%ParxTimer %>27 - The handle of the timer being
%;** %>29 stopped. 
%;**         xBlockTime%ParxBlockTime %>27 - Specifies the time, in ticks,
%;** %>29 that the calling task should be held in the
%;** %>29 Blocked state to wait for the stop command
%;** %>29 to be successfully sent to the timer
%;** %>29 command queue, should the queue already be
%;** %>29 full when xTimerStop() was called.
%;** %>29 xBlockTime is ignored if xTimerStop() is
%;** %>29 called before the RTOS scheduler is started.
%;**     Returns     :
%;**         ---%RetVal %>27 - pdFAIL will be returned if the stop
%;** %>29 command could not be sent to the timer
%;** %>29 command queue even after xBlockTime ticks
%;** %>29 had passed. pdPASS will be returned if the
%;** %>29 command was successfully sent to the timer
%;** %>29 command queue. When the command is actually
%;** %>29 processed will depend on the priority of
%;** %>29 the timer service/daemon task relative to
%;** %>29 other tasks in the system. The timer
%;** %>29 service/daemon task priority is set by the
%;** %>29 configTIMER_TASK_PRIORITY configuration
%;** %>29 constant. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine