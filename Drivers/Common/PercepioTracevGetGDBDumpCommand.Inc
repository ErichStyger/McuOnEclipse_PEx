%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vGetGDBDumpCommand)
%;**     Description :
%;**         Gets the gdb command to dump the trace data to a file.
%;**         Useful for copy-pasting it to the gdb console.
%include Common\GeneralParameters.inc(27)
%;**       * buf%Parbuf %>27 - Pointer to buffer for the command. Make it
%;** %>29 large enoug (about 64 bytes)
%;**         bufSize%ParbufSize %>27 - size of the buffer
%;**       * fileName%ParfileName %>27 - Pointer to the file name string,
%;** %>29 e.g. "C:\\tmp\\trace.dump"
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine