%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WriteCommand)
%;**     Description :
%;**         Sends a command byte to the bus
%include Common\GeneralParameters.inc(27)
%;**         cmd%Parcmd %>27 - the command to be sent
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine
