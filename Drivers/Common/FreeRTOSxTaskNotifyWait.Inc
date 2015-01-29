%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTaskNotifyWait)
%;**     Description :
%;**          [If you are using RTOS task notifications to implement
%;**         binary or counting semaphore type behaviour then use the
%;**         simpler ulTaskNotifyTake() API function instead of
%;**         xTaskNotifyWait()]
%;**         Each RTOS task has a 32-bit notification value which is
%;**         initialised to zero when the RTOS task is created. An RTOS
%;**         task notification is an event sent directly to a task that
%;**         can unblock the receiving task, and optionally update the
%;**         receiving task's notification value in a number of different
%;**         ways. For example, a notification may overwrite the
%;**         receiving task's notification value, or just set one or more
%;**         bits in the receiving task's notification value. See the
%;**         RTOS task notifications use case documentation for examples.
%;**         xTaskNotifyWait() waits, with an optional timeout, for the
%;**         calling task to receive a notification.
%;**         If the receiving RTOS task was already Blocked waiting for a
%;**         notification when one arrives the receiving RTOS task will
%;**         be removed from the Blocked state and the notification
%;**         cleared. 
%include Common\GeneralParameters.inc(27)
%;**         ulBitsToClearOnEntry%ParulBitsToClearOnEntry %>27 - Any bits
%;** %>29 set in ulBitsToClearOnEntry will be cleared
%;** %>29 in the calling RTOS task's notification
%;** %>29 value on entry to the xTaskNotifyWait()
%;** %>29 function (before the task waits for a new
%;** %>29 notification) provided a notification is
%;** %>29 not already pending when xTaskNotifyWait()
%;** %>29 is called.
%;** %>29 For example, if ulBitsToClearOnEntry is
%;** %>29 0x01, then bit 0 of the task's notification
%;** %>29 value will be cleared on entry to the
%;** %>29 function.
%;** %>29 Setting ulBitsToClearOnEntry to 0xffffffff
%;** %>29 (ULONG_MAX) will clear all the bits in the
%;** %>29 task's notification value, effectively
%;** %>29 clearing the value to 0. 
%;**         ulBitsToClearOnExit%ParulBitsToClearOnExit %>27 - Any bits
%;** %>29 set in ulBitsToClearOnExit will be cleared
%;** %>29 in the calling RTOS task's notification
%;** %>29 value before xTaskNotifyWait() function
%;** %>29 exits if a notification was received.
%;** %>29 The bits are cleared after the RTOS task's
%;** %>29 notification value has been saved in
%;** %>29 *pulNotificationValue (see the description
%;** %>29 of pulNotificationValue below).
%;** %>29 For example, if ulBitsToClearOnExit is 0x03,
%;** %>29 then bit 0 and bit 1 of the task's
%;** %>29 notification value will be cleared before
%;** %>29 the function exits.
%;** %>29 Setting ulBitsToClearOnExit to 0xffffffff
%;** %>29 (ULONG_MAX) will clear all the bits in the
%;** %>29 task's notification value, effectively
%;** %>29 clearing the value to 0. 
%;**       * pulNotificationValue%ParpulNotificationValue %>27 - Used to
%;** %>29 pass out the RTOS task's notification value.
%;** %>29 The value copied to *pulNotificationValue
%;** %>29 is the RTOS task's notification value as it
%;** %>29 was before any bits were cleared due to the
%;** %>29 ulBitsToClearOnExit setting.
%;** %>29 If the notification value is not required
%;** %>29 then set pulNotificationValue to NULL. 
%;**         xTicksToWait%ParxTicksToWait %>27 - The maximum time to wait
%;** %>29 in the Blocked state for a notification to
%;** %>29 be received if a notification is not
%;** %>29 already pending when xTaskNotifyWait() is
%;** %>29 called.
%;** %>29 The RTOS task does not consume any CPU time
%;** %>29 when it is in the Blocked state.
%;** %>29 The time is specified in RTOS tick periods.
%;** %>29 The pdMS_TO_TICKS() macro can be used to
%;** %>29 convert a time specified in milliseconds
%;** %>29 into a time specified in ticks. 
%;**     Returns     :
%;**         ---%RetVal %>27 - pdTRUE if a notification was received, or
%;** %>29 a notification was already pending when
%;** %>29 xTaskNotifyWait() was called.
%;** %>29 pdFALSE if the call to xTaskNotifyWait()
%;** %>29 timed out before a notification was
%;** %>29 received. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine