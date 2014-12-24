%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerStart)
%;**     Description :
%;**          Timer functionality is provided by a timer service/daemon
%;**         task. Many of the public FreeRTOS timer API functions send
%;**         commands to the timer service task through a queue called
%;**         the timer command queue. The timer command queue is private
%;**         to the RTOS kernel itself and is not directly accessible to
%;**         application code. The length of the timer command queue is
%;**         set by the configTIMER_QUEUE_LENGTH configuration constant.
%;**         xTimerStart() starts a timer that was previously created
%;**         using the xTimerCreate() API function. If the timer had
%;**         already been started and was already in the active state,
%;**         then xTimerStart() has equivalent functionality to the
%;**         xTimerReset() API function.
%;**         Starting a timer ensures the timer is in the active state.
%;**         If the timer is not stopped, deleted, or reset in the mean
%;**         time, the callback function associated with the timer will
%;**         get called 'n 'ticks after xTimerStart() was called, where
%;**         'n' is the timers defined period.
%;**         It is valid to call xTimerStart() before the RTOS scheduler
%;**         has been started, but when this is done the timer will not
%;**         actually start until the RTOS scheduler is started, and the
%;**         timers expiry time will be relative to when the RTOS
%;**         scheduler is started, not relative to when xTimerStart() was
%;**         called.
%;**         The configUSE_TIMERS configuration constant must be set to 1
%;**         for xTimerStart() to be available. 
%include Common\GeneralParameters.inc(27)
%;**         xTimer%ParxTimer %>27 - The handle of the timer being
%;** %>29 started/restarted. 
%;**         xBlockTime%ParxBlockTime %>27 - Specifies the time, in ticks,
%;** %>29 that the calling task should be held in the
%;** %>29 Blocked state to wait for the start command
%;** %>29 to be successfully sent to the timer
%;** %>29 command queue, should the queue already be
%;** %>29 full when xTimerStart() was called.
%;** %>29 xBlockTime is ignored if xTimerStart() is
%;** %>29 called before the RTOS scheduler is started.
%;**     Returns     :
%;**         ---%RetVal %>27 - pdFAIL will be returned if the start
%;** %>29 command could not be sent to the timer
%;** %>29 command queue even after xBlockTime ticks
%;** %>29 had passed. pdPASS will be returned if the
%;** %>29 command was successfully sent to the timer
%;** %>29 command queue. When the command is actually
%;** %>29 processed will depend on the priority of
%;** %>29 the timer service/daemon task relative to
%;** %>29 other tasks in the system, although the
%;** %>29 timers expiry time is relative to when
%;** %>29 xTimerStart() is actually called. The timer
%;** %>29 service/daemon task priority is set by the
%;** %>29 configTIMER_TASK_PRIORITY configuration
%;** %>29 constant.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine