%- AUTOREGENERATE If you remove this line, this file cannot be rewrited (by default)
%ifndef CommentLine
%{
%endif CommentLine
%;** ===================================================================
%include Common\GeneralMethod.inc (vTraceEnable)
%;**     Description :
%;**         
%include Common\GeneralParameters.inc(27)
%;**         startoption%Parstartoption %>27 - * TRC_START: Starts the
%;** %>29 tracing directly. In snapshot mode this
%;** %>29 allows for 
%;** %>29 * starting the trace at any point in your
%;** %>29 code, assuming vTraceEnable(TRC_INIT)
%;** %>29 * has been called in the startup.
%;** %>29 * Can also be used for streaming without
%;** %>29 Tracealyzer control, e.g. to a local
%;** %>29 * flash file system (assuming such a
%;** %>29 "stream port", see trcStreamingPort.h).
%;** %>29 * 
%;** %>29 * TRC_START_AWAIT_HOST: For streaming mode
%;** %>29 only. Initializes the trace recorder
%;** %>29 * if necessary and waits for a Start
%;** %>29 command from Tracealyzer ("Start Recording"
%;** %>29 * button). This call is intentionally
%;** %>29 blocking! By calling vTraceEnable with
%;** %>29 * this option from the startup code, you
%;** %>29 start tracing at this point and capture
%;** %>29 * the early events.
%;** %>29 *
%;** %>29 * TRC_INIT: Initializes the trace recorder,
%;** %>29 but does not start the tracing.
%;** %>29 * In snapshot mode, this must be followed
%;** %>29 by a vTraceEnable(TRC_START) sometime
%;** %>29 * later.
%include Common\GeneralReturnNothing.inc
%include Common\GeneralDamage.inc
%;** ===================================================================
%ifndef CommentLine
%}
%endif CommentLine