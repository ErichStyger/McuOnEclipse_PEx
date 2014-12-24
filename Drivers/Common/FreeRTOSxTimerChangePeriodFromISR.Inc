%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerChangePeriodFromISR)
%;**     Description :
%;**         A version of xTimerChangePeriod() that can be called from an
%;**         interrupt service routine. 
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
%;**       * pxHigherPriorityTaskWoken%ParpxHigherPriorityTaskWoken %>27
%;** %>29 - The timer service/daemon task spends most
%;** %>29 of its time in the Blocked state, waiting
%;** %>29 for messages to arrive on the timer command
%;** %>29 queue. Calling xTimerChangePeriodFromISR()
%;** %>29 writes a message to the timer command queue,
%;** %>29 so has the potential to transition the
%;** %>29 timer service/ daemon task out of the
%;** %>29 Blocked state. If calling
%;** %>29 xTimerChangePeriodFromISR() causes the
%;** %>29 timer service/daemon task to leave the
%;** %>29 Blocked state, and the timer service/daemon
%;** %>29 task has a priority equal to or greater
%;** %>29 than the currently executing task (the task
%;** %>29 that was interrupted), then
%;** %>29 *pxHigherPriorityTaskWoken will get set to
%;** %>29 pdTRUE internally within the
%;** %>29 xTimerChangePeriodFromISR() function. If
%;** %>29 xTimerChangePeriodFromISR() sets this value
%;** %>29 to pdTRUE, then a context switch should be
%;** %>29 performed before the interrupt exits. 
%;**     Returns     :
%;**         ---%RetVal %>27 - pdFAIL will be returned if the command to
%;** %>29 change the timers period could not be sent
%;** %>29 to the timer command queue. pdPASS will be
%;** %>29 returned if the command was successfully
%;** %>29 sent to the timer command queue. When the
%;** %>29 command is actually processed will depend
%;** %>29 on the priority of the timer service/daemon
%;** %>29 task relative to other tasks in the system.
%;** %>29 The timer service/daemon task priority is
%;** %>29 set by the configTIMER_TASK_PRIORITY
%;** %>29 configuration constant. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine