%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (OnUserStop)
%;**     Description :
%;**         Send a user event stop, such as return of a subroutine for
%;**         profiling.
%include Common\GeneralParameters.inc(27)
%;**         UserId%ParUserId %>27 - User defined ID for the event
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine