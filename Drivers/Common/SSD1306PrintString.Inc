%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PrintString)
%;**     Description :
%;**         Simple low level method printing text to the display.
%;**         Newline is supported.
%include Common\GeneralParameters.inc(27)
%;**         line%Parline %>27 - line number, starting with 0
%;**         col%Parcol %>27 - column number, starting with 0
%;**       * str%Parstr %>27 - Pointer to string to be printed on display
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine