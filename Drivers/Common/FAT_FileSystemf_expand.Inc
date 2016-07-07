%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (f_expand)
%;**     Description :
%;**         Allocate a Contiguous Blocks to the File
%include Common\GeneralParameters.inc(27)
%;**       * fp%Parfp %>27 - Pointer to the file object
%;**         fsz%Parfsz %>27 - File size to be expanded to
%;**         opt%Paropt %>27 - Operation mode 0:Find and prepare or 1:
%;** %>29 Find and allocate
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine