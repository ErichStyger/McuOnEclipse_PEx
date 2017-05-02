%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Waitms)
%;**     Description :
%;**         Programs a pause between instruccions.
%include Common\GeneralParameters.inc(27)
%;**         key%Parkey %>27 - Key to identify the source of the event.
%;**         time_ms%Partime_ms %>27 - Value of time to wait.
%;**     Returns     :
%;**         ---%RetVal %>27 - Returns false if the program buffer or the
%;** %>29 time buffer is full.
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine