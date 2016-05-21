%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PrintHexFile)
%;**     Description :
%;**         Prints the content of a file in hexadecimal format, useful
%;**         for binary files.
%include Common\GeneralParameters.inc(27)
%;**         fileName%ParfileName %>27 - Name of file to be printed
%;**         io%Pario %>27 - Pointer to I/O handler
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine