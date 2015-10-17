%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (ReadBlockGeneric)
%;**     Description :
%;**         Read from the device a block with using additional control
%;**         and flags.
%include Common\GeneralParameters.inc(27)
%;**       * data%Pardata %>27 - Read buffer
%;**         dataSize%PardataSize %>27 - Size of read buffer
%;**         flagsSend%ParflagsSend %>27 - flags for the send transaction
%;**         flagsStart%ParflagsStart %>27 - Start flags
%;**         flagsAck%ParflagsAck %>27 - Acknowledge flags
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine