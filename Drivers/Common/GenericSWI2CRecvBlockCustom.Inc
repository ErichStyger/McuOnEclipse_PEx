%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (RecvBlockCustom)
%;**     Description :
%;**         Same as RecvBlock(), but with additional flags to control
%;**         the bus transfer.
%include Common\GeneralParameters.inc(27)
%;**       * Ptr%ParPtr %>27 - A pointer to the block space for received
%;** %>29 data
%;**         Siz%ParSiz %>27 - The size of the block
%;**       * Rcv%ParRcv %>27 - A pointer to the number of actually
%;** %>29 received data
%;**         flagsStart%ParflagsStart %>27 - Flags for start condition
%;**         flagsAck%ParflagsAck %>27 - Flags for Ack after last byte
%;**     Returns     :
%;**         ---%RetVal %>27 - Error code, possible codes:
%;** %>29 ERR_OK - OK
%;** %>29 ERR_SPEED - This device does not work in
%;** %>29 the active speed mode
%;** %>29 ERR_BUSY - The slave device is busy, it
%;** %>29 does not respond by the acknowledgment
%;** %>29 (MASTER mode only)
%;** %>29 ERR_DISABLED - Device is disabled
%;** %>29 ERR_BUSOFF - Clock timeout elapsed (SLAVE
%;** %>29 mode only)
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine