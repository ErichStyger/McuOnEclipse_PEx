%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadCommandLine)
%;**     Description :
%;**         Similar to ReadAndParseWithCommandTableExt, but does not
%;**         call the parser. Reads characters from the default input
%;**         channel and appends it to the buffer. Once a new line has
%;**         been detected, it  removes it and returns ERR_OK
%include Common\GeneralParameters.inc(27)
%;**       * cmdBuf%ParcmdBuf %>27 - Pointer to buffer provided by the
%;** %>29 caller where to store the command to read
%;** %>29 in. Characters will be appended, so make
%;** %>29 sure string buffer is initialized with a
%;** %>29 zero byte at the beginning.
%;**         cmdBufSize%ParcmdBufSize %>27 - Size of buffer
%;**       * io%Pario %>27 - Pointer to I/O channels to be used
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code, ERR_OK if a complete line has
%;** %>29 been detected
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine