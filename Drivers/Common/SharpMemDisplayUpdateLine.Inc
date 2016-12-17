%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (UpdateLine)
%;**     Description :
%;**         Updates a single line on the LCD
%include Common\GeneralParameters.inc(27)
%;**         line%Parline %>27 - Line number to update, range 0-93
%;**       * dataP%PardataP %>27 - Pointer to data, must be array of 12
%;** %>29 bytes (96 pixels)
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine