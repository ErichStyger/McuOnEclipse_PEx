%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ParseWithCommandTableExt)
%;**     Description :
%;**         Parses a shell command. It handles first the internal
%;**         commands and will call the provided callback.
%include Common\GeneralParameters.inc(27)
%;**       * cmd%Parcmd %>27 - Pointer to command string
%;**       * io%Pario %>27 - Pointer to I/O callbacks
%;**       * parseCallback%ParparseCallback %>27 - Pointer to callback
%;** %>29 which will be called to parse commands in
%;** %>29 the user application, or NULL if not used.
%;**         silent%Parsilent %>27 - If handling shall be silent, i.e. no
%;** %>29 command prompt printed
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine