%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PID)
%;**     Description :
%;**         Performs PID calculation
%include Common\GeneralParameters.inc(27)
%;**         setPoint%ParsetPoint %>27 - current setpoint (desired value)
%;**         currValue%ParcurrValue %>27 - current sensor value
%;**     Returns     :
%;**         ---%RetVal %>27 - output of PID calculation
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine