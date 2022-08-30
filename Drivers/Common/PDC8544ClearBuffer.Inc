%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ClearBuffer)
%;**     Description :
%;**         Writes a color to the full display buffer and clears it.
%include Common\GeneralParameters.inc(27)
%;**         color%Parcolor %>27 - Pixel color value
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine