%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ScanDoubleQuotedString)
%;**     Description :
%;**         Scans a string inside double quotes and returns it without
%;**         the double quotes.
%include Common\GeneralParameters.inc(27)
%;**         cmd%Parcmd %>27 - Pointer to pointer to string to parse.
%;** %>29 This pointer will be advanced as much as
%;** %>29 parsing is done.
%;**       * buf%Parbuf %>27 - Pointer to buffer where to store the string
%;**         bufSize%ParbufSize %>27 - Size of buffer in bytes
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine