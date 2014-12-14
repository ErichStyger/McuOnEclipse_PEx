%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralEvent.inc (OnDeactivate)
%;**     Description :
%;**         Event called when Deactivate() method is called. This gives
%;**         an opportunity to the application to synchronize access to a
%;**         shared bus.
%include Common\GeneralParameters.inc(27)
%;**         mode%Parmode %>27 - 0: slow mode, 1: fast mode
%include Common\GeneralReturnNothing.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine