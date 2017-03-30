%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (WriteDataWordRepeated)
%;**     Description :
%;**         Sends a data word to the display a number of times
%include Common\GeneralParameters.inc(27)
%;**         data%Pardata %>27 - data to write
%;**         nof%Parnof %>27 - How many times the data word shall be sent
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine