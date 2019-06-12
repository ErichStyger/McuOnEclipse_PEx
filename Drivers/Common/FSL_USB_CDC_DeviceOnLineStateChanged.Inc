%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralEvent.inc (OnLineStateChanged)
%;**     Description :
%;**         Event called for SET_CONTROL_LINE_STATE, useful to monitor
%;**         control flow signals
%include Common\GeneralParameters.inc(27)
%;**         value%Parvalue %>27 - Line state value
%include Common\GeneralReturnNothing.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine