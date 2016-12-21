%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (AddTimeString)
%;**     Description :
%;**         Adds a formatted time string to a buffer
%include Common\GeneralParameters.inc(27)
%;**       * buf%Parbuf %>27 - Pointer to zero terminated buffer where to
%;** %>29 append the string
%;**         bufSize%ParbufSize %>27 - Size of the buffer in bytes
%;**       * time%Partime %>27 - Pointer to time information
%;**       * format%Parformat %>27 - Pointer to the format string.
%;** %>29 Supported formats: "hh:mm.ss,cc"
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code, ERR_OK for no error
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine