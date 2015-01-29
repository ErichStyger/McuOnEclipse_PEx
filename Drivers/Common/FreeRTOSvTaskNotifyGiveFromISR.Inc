%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTaskNotifyGiveFromISR)
%;**     Description :
%;**          A version of xTaskNotifyGive() that can be called from an
%;**         interrupt service routine (ISR).
%;**         Each RTOS task has a 32-bit notification value which is
%;**         initialised to zero when the RTOS task is created. An RTOS
%;**         task notification is an event sent directly to a task that
%;**         can unblock the receiving task, and optionally update the
%;**         receiving task's notification value.
%;**         vTaskNotifyGiveFromISR() is a function intended for use when
%;**         an RTOS task notification value is being used as a light
%;**         weight and faster binary or counting semaphore alternative.
%;**         FreeRTOS semaphores are given from an interrupt using the
%;**         xSemaphoreGiveFromISR() API function,
%;**         vTaskNotifyGiveFromISR() is the equivalent that instead uses
%;**         the receiving RTOS task's notification value.
%;**         When a task notification value is being used as a binary or
%;**         counting semaphore equivalent then the task being notified
%;**         should wait for the notification using the ulTaskNotifyTake()
%;**         API function rather than the xTaskNotifyWait() API function. 
%include Common\GeneralParameters.inc(27)
%;**         xTaskToNotify%ParxTaskToNotify %>27 - The handle of the RTOS
%;** %>29 task being notified, and having its
%;** %>29 notification value incremented.
%;** %>29 RTOS task handles are obtained using the
%;** %>29 pvCreatedTask parameter of the xTaskCreate()
%;** %>29 call used to create the task.
%;** %>29 The handle of the currently executing RTOS
%;** %>29 task is returned by the
%;** %>29 xTaskGetCurrentTaskHandle() API function. 
%;**       * pxHigherPriorityTaskWoken%ParpxHigherPriorityTaskWoken %>27
%;** %>29 - *pxHigherPriorityTaskWoken must be
%;** %>29 initialised to 0.
%;** %>29 vTaskNotifyGiveFromISR() will set
%;** %>29 *pxHigherPriorityTaskWoken to pdTRUE if
%;** %>29 sending the notification caused a task to
%;** %>29 unblock, and the unblocked task has a
%;** %>29 priority higher than the currently running
%;** %>29 task.
%;** %>29 If vTaskNotifyGiveFromISR() sets this value
%;** %>29 to pdTRUE then a context switch should be
%;** %>29 requested before the interrupt is exited.
%;** %>29 See the example below.
%;** %>29 pxHigherPriorityTaskWoken is an optional
%;** %>29 parameter and can be set to NULL. 
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine