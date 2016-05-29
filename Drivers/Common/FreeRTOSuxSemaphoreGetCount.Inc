%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (uxSemaphoreGetCount)
%;**     Description :
%;**         
%include Common\GeneralParameters.inc(27)
%;**         xSemaphore%ParxSemaphore %>27 - The handle of the semaphore
%;** %>29 being queried. 
%;**     Returns     :
%;**         ---%RetVal %>27 - If the semaphore is a counting semaphore
%;** %>29 then the semaphores current count value is
%;** %>29 returned. If the semaphore is a binary
%;** %>29 semaphore then 1 is returned if the
%;** %>29 semaphore is available, and 0 is returned
%;** %>29 if the semaphore is not available. 
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine