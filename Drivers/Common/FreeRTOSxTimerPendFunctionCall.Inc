%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTimerPendFunctionCall)
%;**     Description :
%;**          Used to pend the execution of a function to the RTOS daemon
%;**         task (the timer service task, hence this function is
%;**         pre-fixed with 'Timer').
%;**         Functions that can be deferred to the RTOS daemon task must
%;**         have the following prototype:
%;**         void vPendableFunction( void * pvParameter1, uint32_t
%;**         ulParameter2 );
%;**         The pvParameter1 and ulParameter2 are provided for use by
%;**         the application code.
%;**         INCLUDE_xTimerPendFunctionCall() and configUSE_TIMERS must
%;**         both be set to 1 for xTimerPendFunctionCall() to be
%;**         available. 
%include Common\GeneralParameters.inc(27)
%;**         xFunctionToPend%ParxFunctionToPend %>27 - The function to
%;** %>29 execute from the timer service/ daemon task.
%;** %>29 The function must conform to the
%;** %>29 PendedFunction_t prototype as shown above. 
%;**       * pvParameter1%ParpvParameter1 %>27 - The value of the
%;** %>29 callback function's first parameter. The
%;** %>29 parameter has a void * type to allow it to
%;** %>29 be used to pass any type. For example,
%;** %>29 integer types can be cast to a void *, or
%;** %>29 the void * can be used to point to a
%;** %>29 structure. 
%;**         ulParameter2%ParulParameter2 %>27 - The value of the
%;** %>29 callback function's second parameter. 
%;**         xTicksToWait%ParxTicksToWait %>27 -  	Calling this function
%;** %>29 will result in a message being sent to the
%;** %>29 timer daemon task on a queue. xTicksToWait
%;** %>29 is the amount of time the calling task
%;** %>29 should remain in the Blocked state (so not
%;** %>29 using any processing time) for space to
%;** %>29 become available on the timer queue if the
%;** %>29 queue is found to be full. The length of
%;** %>29 the queue is set by the value of
%;** %>29 configTIMER_QUEUE_LENGTH in FreeRTOSConfig.
%;** %>29 h. 
%;**     Returns     :
%;**         ---%RetVal %>27 - pdPASS is returned if the message was
%;** %>29 successfully sent to the RTOS timer daemon
%;** %>29 task, otherwise pdFALSE is returned. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine