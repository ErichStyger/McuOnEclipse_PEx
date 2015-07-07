%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTaskSetThreadLocalStoragePointer)
%;**     Description :
%;**         Only enabled if configNUM_THREAD_LOCAL_STORAGE_POINTERS is >
%;**         0.
%include Common\GeneralParameters.inc(27)
%;**         xTaskToSet%ParxTaskToSet %>27 - Task handle
%;**         xIndex%ParxIndex %>27 - Index of thread local storage item
%;**         pvValue%ParpvValue %>27 - 
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine