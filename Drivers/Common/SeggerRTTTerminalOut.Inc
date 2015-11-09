%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (TerminalOut)
%;**     Description :
%;**         Writes a string to the given terminal without changing the
%;**         terminal for channel 0.
%include Common\GeneralParameters.inc(27)
%;**         TerminalId%ParTerminalId %>27 - TerminalId, 0..15
%;**       * s%Pars %>27 - Pointer to string
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine