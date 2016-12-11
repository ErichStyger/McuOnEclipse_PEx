%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (Init)
%;**     Description :
%;**         Initializes the trace. Call this either from the startup or
%;**         from the application
%include Common\GeneralParameters.inc(27)
%;**         startTracing%ParstartTracing %>27 - if tracing shall be
%;** %>29 started immediately. Note that for
%;** %>29 streaming trace this will be blocking!
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine