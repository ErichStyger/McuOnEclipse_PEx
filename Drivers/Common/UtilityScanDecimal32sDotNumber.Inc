%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ScanDecimal32sDotNumber)
%;**     Description :
%;**         Scans a decimal 32bit signed number with a following dot
%;**         (fractional part), e.g. "-34587.0248", it will return the
%;**         (signed) integral and fractional part with number of
%;**         fractional zeros. The function accepts as well numbers  like
%;**         "17" (no fractional part" or "17.0" 
%include Common\GeneralParameters.inc(27)
%;**         str%Parstr %>27 - string to scan. It returns as well until
%;** %>29 where it has scanned
%;**       * integral%Parintegral %>27 - Pointer to value before the dot
%;**       * fractional%Parfractional %>27 - Pointer to value after the
%;** %>29 dot, e.g. 32 for "-134.0032"
%;**         nofFractionalZeros%ParnofFractionalZeros %>27 - Number of
%;** %>29 fractional leading zeros, e.g. 2 for "-134.
%;** %>29 0032"
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine