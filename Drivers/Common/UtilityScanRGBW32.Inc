%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ScanRGBW32)
%;**     Description :
%;**         Scans a RGBW value and stores it in a single 32bit value.
%;**         String can be a single hex number (0x12050608) or three
%;**         decimal values (18 5 6 8)
%include Common\GeneralParameters.inc(27)
%;**         str%Parstr %>27 - String to scan
%;**       * rgbw%Parrgbw %>27 - Pointer to rgbw value
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine