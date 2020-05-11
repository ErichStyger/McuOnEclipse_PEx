%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ScanRGB)
%;**     Description :
%;**         Scans a RGB value and stores it in r, g and b. String can be
%;**         a single hex number (0x120506) or three decimal values (18 5
%;**         6)
%include Common\GeneralParameters.inc(27)
%;**         str%Parstr %>27 - String to scan
%;**       * r%Parr %>27 - Pointer to red value
%;**       * g%Parg %>27 - Pointer to green value
%;**       * b%Parb %>27 - Pointer to blue value
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine