%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralEvent.inc (OnTimeGet)
%;**     Description :
%;**         Called in the event of a new time get
%include Common\GeneralParameters.inc(27)
%;**       * hour%Parhour %>27 - Pointer to the hour, can be overwritten
%;** %>29 in the event routine.
%;**       * minute%Parminute %>27 - Pointer to the minute, can be
%;** %>29 overwritten in the event routine.
%;**       * second%Parsecond %>27 - Pointer to the second, can be
%;** %>29 overwritten in the event routine.
%;**       * hSecond%ParhSecond %>27 - Pointer to the 0.01 second, can be
%;** %>29 overwritten in the event routine.
%include Common\GeneralReturnNothing.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine