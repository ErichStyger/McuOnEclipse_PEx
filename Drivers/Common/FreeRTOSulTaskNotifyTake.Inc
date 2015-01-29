%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ulTaskNotifyTake)
%;**     Description :
%;**          Each RTOS task has a 32-bit notification value which is
%;**         initialised to zero when the RTOS task is created. An RTOS
%;**         task notification is an event sent directly to a task that
%;**         can unblock the receiving task, and optionally update the
%;**         receiving task's notification value.
%;**         ulTaskNotifyTake() is intended for use when a task
%;**         notification is used as a faster and lighter weight binary
%;**         or counting semaphore alternative. FreeRTOS semaphores are
%;**         taken using the xSemaphoreTake() API function,
%;**         ulTaskNotifyTake() is the equivalent that instead uses a
%;**         task notification.
%;**         When a task is using its notification value as a binary or
%;**         counting semaphore other tasks and interrupts should send
%;**         notifications to it using either the xTaskNotifyGive() macro,
%;**         or the xTaskNotify() function with the function's eAction
%;**         parameter set to eIncrement (the two are equivalent).
%;**         ulTaskNotifyTake() can either clear the task's notification
%;**         value to zero on exit, in which case the notification value
%;**         acts like a binary semaphore, or decrement the task's
%;**         notification value on exit, in which case the notification
%;**         value acts more like a counting semaphore.
%;**         An RTOS task can use ulTaskNotifyTake() to [optionally]
%;**         block to wait for a the task's notification value to be
%;**         non-zero. The task does not consume any CPU time while it is
%;**         in the Blocked state.
%;**         Where as xTaskNotifyWait() will return when a notification
%;**         is pending, ulTaskNotifyTake() will return when the task's
%;**         notification value is not zero, decrementing the task's
%;**         notification value before it returns. 
%include Common\GeneralParameters.inc(27)
%;**         xClearCountOnExit%ParxClearCountOnExit %>27 - If an RTOS
%;** %>29 task notification is received and
%;** %>29 xClearCountOnExit is set to pdFALSE then
%;** %>29 the RTOS task's notification value is
%;** %>29 decremented before ulTaskNotifyTake() exits.
%;** %>29 This is equivalent to the value of a
%;** %>29 counting semaphore being decremented by a
%;** %>29 successful call to xSemaphoreTake().
%;** %>29 If an RTOS task notification is received
%;** %>29 and xClearCountOnExit is set to pdTRUE then
%;** %>29 the RTOS task's notification value is reset
%;** %>29 to 0 before ulTaskNotifyTake() exits. This
%;** %>29 is equivalent to the value of a binary
%;** %>29 semaphore being left at zero (or empty, or
%;** %>29 'not available') after a successful call to
%;** %>29 xSemaphoreTake(). 
%;**         xTicksToWait%ParxTicksToWait %>27 - The maximum time to wait
%;** %>29 in the Blocked state for a notification to
%;** %>29 be received if a notification is not
%;** %>29 already pending when ulTaskNotifyTake() is
%;** %>29 called.
%;** %>29 The RTOS task does not consume any CPU time
%;** %>29 when it is in the Blocked state.
%;** %>29 The time is specified in RTOS tick periods.
%;** %>29 The pdMS_TO_TICKS() macro can be used to
%;** %>29 convert a time specified in milliseconds
%;** %>29 into a time specified in ticks. 
%;**     Returns     :
%;**         ---%RetVal %>27 - The value of the task's notification value
%;** %>29 before it is decremented or cleared (see
%;** %>29 the description of xClearCountOnExit). 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine