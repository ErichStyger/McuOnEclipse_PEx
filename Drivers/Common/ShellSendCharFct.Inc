%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendCharFct)
%;**     Description :
%;**         Method to send a character using a standard I/O handle.
%include Common\GeneralParameters.inc(27)
%;**         ch%Parch %>27 - character to be sent
%;**       * fct%Parfct %>27 - Function pointer to output function: takes
%;** %>29 a byte to write and returns error code.
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine