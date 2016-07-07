%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (PrintDiskInfo)
%;**     Description :
%;**         Prints information about the current disk
%include Common\GeneralParameters.inc(27)
%;**       * drive%Pardrive %>27 - Drive string, can be NULL or e.g.
%;** %>29 pointing to "0"
%;**         io%Pario %>27 - Pointer to I/O handler
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine