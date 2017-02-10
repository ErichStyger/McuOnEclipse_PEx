%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WriteDataWord)
%;**     Description :
%;**         Sends a data word to the display
%include Common\GeneralParameters.inc(27)
%;**         data%Pardata %>27 - data to write
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine