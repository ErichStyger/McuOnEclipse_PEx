%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (strcatNumHex)
%;**     Description :
%;**         Appends a value as hex valalue to a string buffer as hex
%;**         number (without a 0x prefix), with variable number of digits
%include Common\GeneralParameters.inc(27)
%;**       * dst%Pardst %>27 - Pointer to destination string
%;**         dstSize%PardstSize %>27 - Size of the destination buffer (in
%;** %>29 bytes).
%;**         num%Parnum %>27 - Value to convert.
%;**         nofBytes%ParnofBytes %>27 - Number of bytes to write
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine