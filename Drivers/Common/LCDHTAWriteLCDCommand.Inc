%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WriteLCDCommand)
%;**     Description :
%;**         Writes a command to the display
%include Common\GeneralParameters.inc(27)
%;**         cmd%Parcmd %>27 - command passed to the LCD
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine