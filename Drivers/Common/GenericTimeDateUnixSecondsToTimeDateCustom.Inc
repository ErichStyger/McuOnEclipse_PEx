%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (UnixSecondsToTimeDateCustom)
%;**     Description :
%;**         Transforms a given time/date into the Unix time stamp, with
%;**         the number of seconds from a starting date
%include Common\GeneralParameters.inc(27)
%;**         seconds%Parseconds %>27 - Unix time stamp in seconds after
%;** %>29 the given base year and base month
%;**         offset_hours%Paroffset_hours %>27 - Optional time zone
%;** %>29 offset, use 0 for no offset
%;**       * time%Partime %>27 - Pointer to TIMEREC struct where the
%;** %>29 result is stored. Can be NULL.
%;**       * date%Pardate %>27 - Pointer to DATEREC struct where the
%;** %>29 result is stored. Can be NULL.
%;**         baseYear%ParbaseYear %>27 - Base year from which is used as
%;** %>29 base to count the seconds, in YYYY format.
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine