%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (TimeDateToUnixSecondsCustom)
%;**     Description :
%;**         Returns for a given time/date the corresponding UNIX time
%;**         stamp with a custom base date.
%include Common\GeneralParameters.inc(27)
%;**       * time%Partime %>27 - Pointer to TIMEREC which holds the time
%;** %>29 to convert
%;**       * date%Pardate %>27 - Pointer to DATEREC with the date to
%;** %>29 convert
%;**         offset_hours%Paroffset_hours %>27 - Optional number of
%;** %>29 offset hours to adjust for the time zone.
%;** %>29 Use 0 for no adjustment.
%;**         baseYear%ParbaseYear %>27 - Base year from which is used as
%;** %>29 base to count the seconds, in YYYY format
%;**     Returns     :
%;**         ---%RetVal %>27 - number of seconds after given base
%;** %>29 month/year
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine