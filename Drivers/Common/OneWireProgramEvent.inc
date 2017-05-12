%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ProgramEvent)
%;**     Description :
%;**         Used to add a program event
%include Common\GeneralParameters.inc(27)
%;**         key%Parkey %>27 - Key to identificate the event, applies
%;** %>29 only if OnProgramEvent is enabled. (Valid
%;** %>29 range 0 - 31)
%;**     Returns     :
%;**         ---%RetVal %>27 - error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine