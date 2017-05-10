%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (CalcCRC)
%;**     Description :
%;**         Calculates the CRC over a number of bytes
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Pointer to data
%;**         dataSize%PardataSize %>27 - number of data bytes
%;**     Returns     :
%;**         ---%RetVal %>27 - calculated CRC
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine