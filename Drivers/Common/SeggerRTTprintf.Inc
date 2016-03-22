%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (printf)
%;**     Description :
%;**         Stores a formatted string in SEGGER RTT control block. This
%;**         data is sent to the host.
%include Common\GeneralParameters.inc(27)
%;**         BufferIndex%ParBufferIndex %>27 - Index of "Up"-buffer to be
%;** %>29 used. (e.g. 0 for "Terminal")
%;**         sFormat%ParsFormat %>27 - Pointer to format string, followed
%;** %>29 by the arguments for conversion
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine