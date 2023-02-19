%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (GetLinkerMainStackTop)
%;**     Description :
%;**         Return the stack top, as set in the linker file. The stack
%;**         grows from the top (higher address) to the base (lower
%;**         address).
%include Common\GeneralParametersNone.inc
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine