%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerChangePeriod)
%;**     Description :
%;**          Timer functionality is provided by a timer service/daemon
%;**         task. Many of the public FreeRTOS timer API functions send
%;**         commands to the timer service task through a queue called
%;**         the timer command queue. The timer command queue is private
%;**         to the RTOS kernel itself and is not directly accessible to
%;**         application code. The length of the timer command queue is
%;**         set by the configTIMER_QUEUE_LENGTH configuration constant.
%;**         xTimerChangePeriod() changes the period of a timer that was
%;**         previously created using the xTimerCreate() API function.
%;**         xTimerChangePeriod() can be called to change the period of
%;**         an active or dormant state timer.
%;**         The configUSE_TIMERS configuration constant must be set to 1
%;**         for xTimerChangePeriod() to be available. 
%include Common\GeneralParameters.inc(27)
%;**         xTimer%ParxTimer %>27 - The handle of the timer that is
%;** %>29 having its period changed. 
%;**         xNewPeriod%ParxNewPeriod %>27 - The new period for xTimer.
%;** %>29 Timer periods are specified in tick periods,
%;** %>29 so the constant portTICK_PERIOD_MS can be
%;** %>29 used to convert a time that has been
%;** %>29 specified in milliseconds. For example, if
%;** %>29 the timer must expire after 100 ticks, then
%;** %>29 xNewPeriod should be set to 100.
%;** %>29 Alternatively, if the timer must expire
%;** %>29 after 500ms, then xNewPeriod can be set to
%;** %>29 ( 500 / portTICK_PERIOD_MS ) provided
%;** %>29 configTICK_RATE_HZ is less than or equal to
%;** %>29 1000. 
%;**         xBlockTime%ParxBlockTime %>27 - Specifies the time, in ticks,
%;** %>29 that the calling task should be held in the
%;** %>29 Blocked state to wait for the change period
%;** %>29 command to be successfully sent to the
%;** %>29 timer command queue, should the queue
%;** %>29 already be full when xTimerChangePeriod()
%;** %>29 was called. xBlockTime is ignored if
%;** %>29 xTimerChangePeriod() is called before the
%;** %>29 RTOS scheduler is started. 
%;**     Returns     :
%;**         ---%RetVal %>27 - pdFAIL will be returned if the change
%;** %>29 period command could not be sent to the
%;** %>29 timer command queue even after xBlockTime
%;** %>29 ticks had passed. pdPASS will be returned
%;** %>29 if the command was successfully sent to the
%;** %>29 timer command queue. When the command is
%;** %>29 actually processed will depend on the
%;** %>29 priority of the timer service/daemon task
%;** %>29 relative to other tasks in the system. The
%;** %>29 timer service/daemon task priority is set
%;** %>29 by the configTIMER_TASK_PRIORITY
%;** %>29 configuration constant. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine