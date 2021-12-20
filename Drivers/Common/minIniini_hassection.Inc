%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ini_hassection)
%;**     Description :
%;**         Used to find out if section exists. Returns 1 if the section
%;**         has been found, 0 otherwise.
%include Common\GeneralParameters.inc(27)
%;**       * Section%ParSection %>27 - The name of the section
%;**       * Filename%ParFilename %>27 - The name and full path of the .
%;** %>29 ini file to read from
%;**     Returns     :
%;**         ---%RetVal %>27 - The number of characters copied into the
%;** %>29 supplied buffer
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine