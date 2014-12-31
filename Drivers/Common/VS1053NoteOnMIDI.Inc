%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (NoteOnMIDI)
%;**     Description :
%;**         Send a MIDI note-on message, like pressing a piano key.
%include Common\GeneralParameters.inc(27)
%;**         channel%Parchannel %>27 - Channel is from 0-15
%;**         note%Parnote %>27 - Note to be played
%;**         velocity%Parvelocity %>27 - pressing velocity of key
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine