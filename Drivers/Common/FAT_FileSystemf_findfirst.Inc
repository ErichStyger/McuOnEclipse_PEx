%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (f_findfirst)
%;**     Description :
%;**         Find FirstFile
%include Common\GeneralParameters.inc(27)
%;**         dp%Pardp %>27 - Pointer to the open directory object
%;**         fno%Parfno %>27 - Pointer to the file information structure
%;**         path%Parpath %>27 - Pointer to the directory to open
%;**         pattern%Parpattern %>27 - Pointer to the matching pattern
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine