%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ini_browse)
%;**     Description :
%;**         Function to browse the ini file. With this function the file
%;**         is opened only once.
%include Common\GeneralParameters.inc(27)
%;**         Callback%ParCallback %>27 - a pointer to a function that
%;** %>29 will be called for every setting in the INI
%;** %>29 file.
%;**         UserData%ParUserData %>27 - arbitrary data, which the
%;** %>29 function passes on the the Callback function
%;**         Filename%ParFilename %>27 - the name and full path of the .
%;** %>29 ini file to read from
%;**     Returns     :
%;**         ---%RetVal %>27 - 1 on success, 0 on failure (INI file not
%;** %>29 found)
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine