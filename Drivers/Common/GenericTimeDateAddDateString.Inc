%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (AddDateString)
%;**     Description :
%;**         Adds a formatted date string to a buffer
%include Common\GeneralParameters.inc(27)
%;**       * buf%Parbuf %>27 - Pointer to zero terminated buffer where to
%;** %>29 append the string
%;**         bufSize%ParbufSize %>27 - Size of the buffer in bytes
%;**       * date%Pardate %>27 - Pointer to date information
%;**       * format%Parformat %>27 - Pointer to the format string.
%;** %>29 Supported formats: "dd.mm.yyyy"
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code, ERR_OK for no error
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine