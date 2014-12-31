%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (LoadUserCode)
%;**     Description :
%;**         Loads a user code or plugin into the device.
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Pointer to data of the plugin
%;**         nofWords%ParnofWords %>27 - Number of 16bit words of data
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine