%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ConfigUpBuffer)
%;**     Description :
%;**         Configures the Up (device to host) buffer
%include Common\GeneralParameters.inc(27)
%;**         BufferIndex%ParBufferIndex %>27 - Buffer index
%;**         sName%ParsName %>27 - Buffer name
%;**       * pBuffer%ParpBuffer %>27 - Pointer to buffer
%;**         intBufferSize%ParintBufferSize %>27 - Size of buffer in bytes
%;**         Flags%ParFlags %>27 - SEGGER_RTT_MODE_NO_BLOCK_SKIP,
%;** %>29 SEGGER_RTT_MODE_NO_BLOCK_TRIM or
%;** %>29 SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code, >=0 OK, <0 Error
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine