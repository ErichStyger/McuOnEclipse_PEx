%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskNotifyFromISR)
%;**     Description :
%;**          [If you are using RTOS task notifications to implement
%;**         binary or counting semaphore type behaviour then use the
%;**         simpler xTaskNotifyGive() API function instead of
%;**         xTaskNotify()]
%;**         A version of xTaskNotify() that can be called from an ISR. 
%;**         Each RTOS task has a 32-bit notification value which is
%;**         initialised to zero when the RTOS task is created.
%;**         xTaskNotify() is used to send an event directly to and
%;**         potentially unblock an RTOS task, and optionally update the
%;**         receiving task's notification value in one of the following
%;**         ways:
%;**         - Write a 32-bit number to the notification value
%;**         - Add one (increment) the notification value
%;**         - Set one or more bits in the notification value
%;**         - Leave the notification value unchanged
%;**         This function must not be called from an interrupt service
%;**         routine (ISR). Use xTaskNotifyFromISR() instead. 
%include Common\GeneralParameters.inc(27)
%;**         xTaskToNotify%ParxTaskToNotify %>27 - The handle of the RTOS
%;** %>29 task being notified. This is the subject
%;** %>29 task.
%;** %>29 RTOS task handles are obtained using the
%;** %>29 pvCreatedTask parameter of the xTaskCreate()
%;** %>29 call used to create the task.
%;** %>29 The handle of the currently executing RTOS
%;** %>29 task is returned by the
%;** %>29 xTaskGetCurrentTaskHandle() API function. 
%;**         ulValue%ParulValue %>27 - Used to update the notification
%;** %>29 value of the subject task. See the
%;** %>29 description of the eAction parameter below. 
%;**         eAction%PareAction %>27 - An enumerated type that can take
%;** %>29 one of the values documented in the table
%;** %>29 below in order to perform the associated
%;** %>29 action. 
%;** %>29 - eNoAction: 	The subject task receives the
%;** %>29 event, but its notification value is not
%;** %>29 updated. In this case ulValue is not used.
%;** %>29 - eSetBits: 	The notification value of the
%;** %>29 subject task will be bitwise ORed with
%;** %>29 ulValue. For example, if ulValue is set to
%;** %>29 0x01, then bit 0 will get set within the
%;** %>29 subject task's notification value. Likewise
%;** %>29 if ulValue is 0x04 then bit 2 will get set
%;** %>29 in the subject task's notification value.
%;** %>29 In this way the RTOS task notification
%;** %>29 mechanism can be used as a light weight
%;** %>29 alternative to an event group.
%;** %>29 - eIncrement: 	The notification value of
%;** %>29 the subject task will be incremented by one,
%;** %>29 making the call to xTaskNotify() equivalent
%;** %>29 to a call to xTaskNotifyGive(). In this
%;** %>29 case ulValue is not used.
%;** %>29 - eSetValueWithOverwrite: 	The notification
%;** %>29 value of the subject task is
%;** %>29 unconditionally set to ulValue. In this way
%;** %>29 the RTOS task notification mechanism is
%;** %>29 being used as a light weight alternative to
%;** %>29 xQueueOverwrite().
%;** %>29 - eSetValueWithoutOverwrite: 	If the
%;** %>29 subject task does not already have a
%;** %>29 notification pending then its notification
%;** %>29 value will be set to ulValue. If the
%;** %>29 subject task already has a notification
%;** %>29 pending then its notification value is not
%;** %>29 updated as to do so would overwrite the
%;** %>29 previous value before it was used. In this
%;** %>29 case the call to xTaskNotify() fails and
%;** %>29 pdFALSE is returned. In this way the RTOS
%;** %>29 task notification mechanism is being used
%;** %>29 as a light weight alternative to
%;** %>29 xQueueSend() on a queue of length 1. 
%;**       * pxHigherPriorityTaskWoken%ParpxHigherPriorityTaskWoken %>27
%;** %>29 - *pxHigherPriorityTaskWoken must be
%;** %>29 initialised to 0.
%;** %>29 xTaskNotifyFromISR() will set
%;** %>29 *pxHigherPriorityTaskWoken to pdTRUE if
%;** %>29 sending the notification caused a task to
%;** %>29 unblock, and the unblocked task has a
%;** %>29 priority higher than the currently running
%;** %>29 task.
%;** %>29 If xTaskNotifyFromISR() sets this value to
%;** %>29 pdTRUE then a context switch should be
%;** %>29 requested before the interrupt is exited.
%;** %>29 See the example below.
%;** %>29 pxHigherPriorityTaskWoken is an optional
%;** %>29 parameter and can be set to NULL. 
%;**     Returns     :
%;**         ---%RetVal %>27 - pdPASS is returned in all cases other than
%;** %>29 when eAction is set to
%;** %>29 eSetValueWithoutOverwrite and the subject
%;** %>29 task's notification value cannot be updated
%;** %>29 because the subject task already had a
%;** %>29 notification pending. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine