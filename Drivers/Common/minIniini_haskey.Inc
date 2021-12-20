%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ini_haskey)
%;**     Description :
%;**         Used to find if a key exists. Returns 1 if key has been
%;**         found, 0 otherwise.
%include Common\GeneralParameters.inc(27)
%;**       * Section%ParSection %>27 - The name of the section
%;**       * Key%ParKey %>27 - The name of the entry to find
%;**       * Filename%ParFilename %>27 - The name and full path of the .
%;** %>29 ini file
%;**     Returns     :
%;**         ---%RetVal %>27 - 1 if successful, otherwise 0
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine