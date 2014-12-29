%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (SendData)
%;**     Description :
%;**         Sends a block of data to the device
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Pointer to data
%;**         dataSize%PardataSize %>27 - Size of the data in bytes
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine