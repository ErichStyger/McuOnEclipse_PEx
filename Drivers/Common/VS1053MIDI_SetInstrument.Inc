%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (MIDI_SetInstrument)
%;**     Description :
%;**         Sets the instrument for the channel
%include Common\GeneralParameters.inc(27)
%;**         channel%Parchannel %>27 - Channel
%;**         instrument%Parinstrument %>27 - instrument number (0..127)
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine