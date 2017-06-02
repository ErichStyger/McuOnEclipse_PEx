%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadRawDataInfrared)
%;**     Description :
%;**         Read the raw infrared light data value
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Pointer to where to store the data
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine