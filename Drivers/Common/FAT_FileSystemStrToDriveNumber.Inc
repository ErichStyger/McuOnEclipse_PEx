%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (StrToDriveNumber)
%;**     Description :
%;**         Transforms a drive string ("0:/") into a drive number (0)
%include Common\GeneralParameters.inc(27)
%;**       * drvStr%PardrvStr %>27 - Pointer to drive string, e.g. "0:/"
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine