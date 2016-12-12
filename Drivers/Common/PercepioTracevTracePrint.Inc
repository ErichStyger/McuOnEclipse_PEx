%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTracePrint)
%;**     Description :
%;**         Generates a User Event with a text label. The label is
%;**         created/looked up in the symbol table using
%;**         xTraceRegisterString.
%include Common\GeneralParameters.inc(27)
%;**         chn%Parchn %>27 - trace label for the user event
%;**       * str%Parstr %>27 - Pointer to string
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine