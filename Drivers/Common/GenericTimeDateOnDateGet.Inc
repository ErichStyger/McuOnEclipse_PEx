%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralEvent.inc (OnDateGet)
%;**     Description :
%;**         called in the event of a date get
%include Common\GeneralParameters.inc(27)
%;**       * day%Parday %>27 - Pointer to the day, can be written in the
%;** %>29 event routine.
%;**       * month%Parmonth %>27 - Pointer to the month, can be written
%;** %>29 in the event routine.
%;**       * year%Paryear %>27 - Pointer to the year, can be written in
%;** %>29 the event routine.
%include Common\GeneralReturnNothing.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine