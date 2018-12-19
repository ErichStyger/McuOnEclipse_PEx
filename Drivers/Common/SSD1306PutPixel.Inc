%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PutPixel)
%;**     Description :
%;**         Draws a pixel into the display buffer (not on the display).
%include Common\GeneralParameters.inc(27)
%;**         x%Parx %>27 - x position of the pixel
%;**         y%Pary %>27 - y position of the pixel
%;**         color%Parcolor %>27 - color value of the pixel
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine