%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (DrawMonoBitmapMask)
%;**     Description :
%;**         Draws a B/W bitmap, but only the pixels which are set
%include Common\GeneralParameters.inc(27)
%;**         x%Parx %>27 - x position of left upper corner
%;**         y%Pary %>27 - y position of left upper corner
%;**         image%Parimage %>27 - Pointer to image structure and
%;** %>29 information.
%;**         pixelColor%ParpixelColor %>27 - Color to be used for pixels
%;** %>29 (pixel set)
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine