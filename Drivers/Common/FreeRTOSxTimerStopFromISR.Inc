%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerStopFromISR)
%;**     Description :
%;**         A version of xTimerStop() that can be called from an
%;**         interrupt service routine.
%include Common\GeneralParameters.inc(27)
%;**         xTimer%ParxTimer %>27 - The handle of the timer being
%;** %>29 stopped. 
%;**       * pxHigherPriorityTaskWoken%ParpxHigherPriorityTaskWoken %>27
%;** %>29 - The timer service/daemon task spends most
%;** %>29 of its time in the Blocked state, waiting
%;** %>29 for messages to arrive on the timer command
%;** %>29 queue. Calling xTimerStopFromISR() writes a
%;** %>29 message to the timer command queue, so has
%;** %>29 the potential to transition the timer
%;** %>29 service/daemon task out of the Blocked
%;** %>29 state. If calling xTimerStopFromISR()
%;** %>29 causes the timer service/daemon task to
%;** %>29 leave the Blocked state, and the timer
%;** %>29 service/ daemon task has a priority equal
%;** %>29 to or greater than the currently executing
%;** %>29 task (the task that was interrupted), then
%;** %>29 *pxHigherPriorityTaskWoken will get set to
%;** %>29 pdTRUE internally within the
%;** %>29 xTimerStopFromISR() function. If
%;** %>29 xTimerStopFromISR() sets this value to
%;** %>29 pdTRUE, then a context switch should be
%;** %>29 performed before the interrupt exits. 
%;**     Returns     :
%;**         ---%RetVal %>27 - pdFAIL will be returned if the stop
%;** %>29 command could not be sent to the timer
%;** %>29 command queue. pdPASS will be returned if
%;** %>29 the command was successfully sent to the
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