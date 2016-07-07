%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (f_getlabel)
%;**     Description :
%;**         Get volume label
%include Common\GeneralParameters.inc(27)
%;**       * path%Parpath %>27 - Pointer to path name of the logical
%;** %>29 drive number
%;**       * label%Parlabel %>27 - Pointer to a buffer to return the
%;** %>29 volume label
%;**         vsn%Parvsn %>27 - 
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine