%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskNotifyGive)
%;**     Description :
%;**          Each RTOS task has a 32-bit notification value which is
%;**         initialised to zero when the RTOS task is created. An RTOS
%;**         task notification is an event sent directly to a task that
%;**         can unblock the receiving task, and optionally update the
%;**         receiving task's notification value.
%;**         xTaskNotifyGive() is a macro intended for use when an RTOS
%;**         task notification value is being used as a light weight and
%;**         faster binary or counting semaphore alternative. FreeRTOS
%;**         semaphores are given using the xSemaphoreGive() API function,
%;**         xTaskNotifyGive() is the equivalent that instead uses the
%;**         receiving RTOS task's notification value.
%;**         When a task notification value is being used as a binary or
%;**         counting semaphore equivalent then the task being notified
%;**         should wait for the notification using the ulTaskNotifyTake()
%;**         API function rather than the xTaskNotifyWait() API function.
%;**         xTaskNotifyGive() must not be called from an interrupt
%;**         service routine. Use vTaskNotifyGiveFromISR() instead. 
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
%;**     Returns     :
%;**         ---%RetVal %>27 - xTaskNotifyGive() is a macro that calls
%;** %>29 xTaskNotify() with the eAction parameter
%;** %>29 set to eIncrement resulting in all calls
%;** %>29 returning pdPASS. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine