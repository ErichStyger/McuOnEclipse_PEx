%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SetIdleClockPolarity)
%;**     Description :
%;**         Set the idle clock polarity at runtime. If communication
%;**         does not run, the clock signal will be set to the required
%;**         level.
%include Common\GeneralParameters.inc(27)
%;**         Level%ParLevel %>27 - Idle clock polarity:
%;** %>29 0-low
%;** %>29 1-high
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code, possible codes:
%;** %>29 ERR_OK - OK
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine