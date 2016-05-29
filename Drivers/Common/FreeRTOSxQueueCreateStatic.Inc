%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xQueueCreateStatic)
%;**     Description :
%;**         Creates a queue.
%include Common\GeneralParameters.inc(27)
%;**         uxQueueLength%ParuxQueueLength %>27 - The maximum number of
%;** %>29 items the queue can hold at any time.
%;**         uxItemSize%ParuxItemSize %>27 - The size in bytes of each
%;** %>29 item the queue will hold.
%;**         pucQueueStorageBuffer%ParpucQueueStorageBuffer %>27 - If
%;** %>29 uxItemSize is not zero then
%;** %>29 pucQueueStorageBuffer must point to a
%;** %>29 uint8_t array that is at least large enough
%;** %>29 to hold the maximum number of items that
%;** %>29 can be in the queue at any one time - which
%;** %>29 is ( uxQueueLength * uxItemSize ) bytes. If
%;** %>29 uxItemSize is zero then
%;** %>29 pucQueueStorageBuffer can be NULL. 
%;**         pxQueueBuffer%ParpxQueueBuffer %>27 - Must point to a
%;** %>29 variable of type StaticQueue_t, which will
%;** %>29 be used to hold the queue's data structure.
%;**     Returns     :
%;**         ---%RetVal %>27 - A handle to the created queue is returned
%;** %>29 provided the queue was created successfully.
%;** %>29 NULL is returned if the queue cannot be
%;** %>29 created because there is too little heap
%;** %>29 RAM available.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine