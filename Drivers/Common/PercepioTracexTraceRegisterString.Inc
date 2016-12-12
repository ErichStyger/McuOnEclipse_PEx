%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (xTraceRegisterString)
%;**     Description :
%;**         Register strings in the recorder, e.g. for names of user
%;**         event channels.
%include Common\GeneralParameters.inc(27)
%;**       * name%Parname %>27 - Pointer to label
%;**     Returns     :
%;**         ---%RetVal %>27 - trace label to be used with vTracePrintF
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine