%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetDisplayClockDiv)
%;**     Description :
%;**         Sets the display clock divider (default 0x80). This can be
%;**         used to affect display refresh rate or to reduce audible
%;**         noise.
%include Common\GeneralParameters.inc(27)
%;**         clockDiv%ParclockDiv %>27 - Clock Divider (default 0x80).
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine