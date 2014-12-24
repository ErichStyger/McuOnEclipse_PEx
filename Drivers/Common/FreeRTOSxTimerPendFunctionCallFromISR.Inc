%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerPendFunctionCallFromISR)
%;**     Description :
%;**          Used from application interrupt service routines to defer
%;**         the execution of a function to the RTOS daemon task (the
%;**         timer service task, hence this function is implemented in
%;**         timers.c and is prefixed with 'Timer').
%;**         Ideally an interrupt service routine (ISR) is kept as short
%;**         as possible, but sometimes an ISR either has a lot of
%;**         processing to do, or needs to perform processing that is not
%;**         deterministic. In these cases xTimerPendFunctionCallFromISR()
%;**         can be used to defer processing of a function to the RTOS
%;**         daemon task.
%;**         A mechanism is provided that allows the interrupt to return
%;**         directly to the task that will subsequently execute the
%;**         pended function. This allows the callback function to
%;**         execute contiguously in time with the interrupt - just as if
%;**         the callback had executed in the interrupt itself.
%;**         Functions that can be deferred to the RTOS daemon task must
%;**         have the following prototype:
%;**         void vPendableFunction( void * pvParameter1, uint32_t
%;**         ulParameter2 );
%;**         The pvParameter1 and ulParameter2 are provided for use by
%;**         the application code.
%;**         INCLUDE_xTimerPendFunctionCall() and configUSE_TIMERS must
%;**         both be set to 1 for xTimerPendFunctionCallFromISR() to be
%;**         available. 
%include Common\GeneralParameters.inc(27)
%;**         xFunctionToPend%ParxFunctionToPend %>27 - The function to
%;** %>29 execute from the timer service/ daemon task.
%;** %>29 The function must conform to the
%;** %>29 PendedFunction_t prototype as shown above. 
%;**       * pvParameter1%ParpvParameter1 %>27 -  	The value of the
%;** %>29 callback function's first parameter. The
%;** %>29 parameter has a void * type to allow it to
%;** %>29 be used to pass any type. For example,
%;** %>29 integer types can be cast to a void *, or
%;** %>29 the void * can be used to point to a
%;** %>29 structure. 
%;**         ulParameter2%ParulParameter2 %>27 - The value of the
%;** %>29 callback function's second parameter. 
%;**       * pxHigherPriorityTaskWoken%ParpxHigherPriorityTaskWoken %>27
%;** %>29 - As mentioned above, calling
%;** %>29 xTimerPendFunctionCallFromISR() will result
%;** %>29 in a message being sent to the RTOS timer
%;** %>29 daemon task. If the priority of the daemon
%;** %>29 task (which is set using
%;** %>29 configTIMER_TASK_PRIORITY in FreeRTOSConfig.
%;** %>29 h) is higher than the priority of the
%;** %>29 currently running task (the task the
%;** %>29 interrupt interrupted) then
%;** %>29 *pxHigherPriorityTaskWoken will be set to
%;** %>29 pdTRUE within
%;** %>29 xTimerPendFunctionCallFromISR(), indicating
%;** %>29 that a context switch should be requested
%;** %>29 before the interrupt exits. For that reason
%;** %>29 *pxHigherPriorityTaskWoken must be
%;** %>29 initialised to pdFALSE. See the example
%;** %>29 code below. 
%;**     Returns     :
%;**         ---%RetVal %>27 - pdPASS is returned if the message was
%;** %>29 successfully sent to the RTOS timer daemon
%;** %>29 task, otherwise pdFALSE is returned. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine