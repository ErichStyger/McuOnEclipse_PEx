%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PutPixel)
%;**     Description :
%;**         Writes a pixel to the display RAM buffer
%include Common\GeneralParameters.inc(27)
%;**         x%Parx %>27 - Pixel x coordinate
%;**         y%Pary %>27 - Pixel y coordinate
%;**         color%Parcolor %>27 - Pixel color value
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine