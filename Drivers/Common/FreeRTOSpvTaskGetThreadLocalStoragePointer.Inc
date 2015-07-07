%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (pvTaskGetThreadLocalStoragePointer)
%;**     Description :
%;**         Sets the thread local storage. Only enabled if
%;**         configNUM_THREAD_LOCAL_STORAGE_POINTERS is >0
%include Common\GeneralParameters.inc(27)
%;**         xTaskToQuery%ParxTaskToQuery %>27 - Task handle from which
%;** %>29 to get the local thread storage.
%;**         xIndex%ParxIndex %>27 - Index of thread storage
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine