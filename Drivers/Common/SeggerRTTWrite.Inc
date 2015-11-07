%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Write)
%;**     Description :
%;**         Write to buffer
%include Common\GeneralParameters.inc(27)
%;**         BufferIndex%ParBufferIndex %>27 - Buffer/channel to be used.
%;** %>29 0 for terminal.
%;**       * pBuffer%ParpBuffer %>27 - Pointer to buffer
%;**         BufferSize%ParBufferSize %>27 - Size of buffer
%;**     Returns     :
%;**         ---%RetVal %>27 - Number of bytes which have been written to
%;** %>29 the up buffer
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine