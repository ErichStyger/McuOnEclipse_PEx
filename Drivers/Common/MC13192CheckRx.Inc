%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (CheckRx)
%;**     Description :
%;**         Checks for a received data packet
%include Common\GeneralParameters.inc(27)
%;**       * sRxPacket%ParsRxPacket %>27 - Pointer to where to store the
%;** %>29 data
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine