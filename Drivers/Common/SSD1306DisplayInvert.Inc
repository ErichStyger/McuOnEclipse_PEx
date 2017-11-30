%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (DisplayInvert)
%;**     Description :
%;**         Used to inverse the display. In normal mode, 1 one in the
%;**         display RAM is a pixel set and a 0 means pixel clear.
%include Common\GeneralParameters.inc(27)
%;**         invert%Parinvert %>27 - if TRUE, a 1 is pixel clear and a 0
%;** %>29 is a pixel set.
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine