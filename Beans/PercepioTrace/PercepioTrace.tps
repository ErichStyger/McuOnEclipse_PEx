<?xml version="1.0" encoding="UTF-8"?>
<TypesAndGlobals>
  <Types>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typeRecorderStoreMode</Name>
      <Items lines_count="2">
        <Line>Ring Buffer</Line>
        <Line>Stop when full</Line>
      </Items>
      <Hints lines_count="2">
        <Line>Using ring buffer</Line>
        <Line>Stops recording when buffer is ful</Line>
      </Hints>
      <Defines lines_count="2">
        <Line>TRC_SNAPSHOT_MODE_RING_BUFFER</Line>
        <Line>TRC_SNAPSHOT_MODE_STOP_WHEN_FULL</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typeTimerPort</Name>
      <Items lines_count="2">
        <Line>OS Tick</Line>
        <Line>HW Timer</Line>
      </Items>
      <Hints lines_count="2">
        <Line>Using the OS Tick as low resolution timestamps</Line>
        <Line>Using hardware timer (RTOS performance timer)</Line>
      </Hints>
      <Defines lines_count="2">
        <Line>TIMER_PORT_TYPE_OSTICK</Line>
        <Line>TIMER_PORT_TYPE_HWTC</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typeRecorderBufferAllocation</Name>
      <Items lines_count="3">
        <Line>static</Line>
        <Line>dynamic</Line>
        <Line>custom</Line>
      </Items>
      <Hints lines_count="3">
        <Line>Static allocation</Line>
        <Line>Allocated in vTraceEnable</Line>
        <Line>Use vTraceSetRecorderDataBuffer</Line>
      </Hints>
      <Defines lines_count="3">
        <Line>TRC_RECORDER_BUFFER_ALLOCATION_STATIC</Line>
        <Line>TRC_RECORDER_BUFFER_ALLOCATION_DYNAMIC</Line>
        <Line>TRC_RECORDER_BUFFER_ALLOCATION_CUSTOM</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typeRecorderMode</Name>
      <Items lines_count="2">
        <Line>Snapshot</Line>
        <Line>Streaming</Line>
      </Items>
      <Hints lines_count="2">
        <Line>Does snapshot trace into local RAM buffer for later uploade.</Line>
        <Line>Does continuous trace to the host PC.</Line>
      </Hints>
      <Defines lines_count="2">
        <Line>TRC_RECORDER_MODE_SNAPSHOT</Line>
        <Line>TRC_RECORDER_MODE_STREAMING</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typeTraceEnable</Name>
      <Items lines_count="3">
        <Line>TRC_INIT</Line>
        <Line>TRC_START</Line>
        <Line>TRC_START_AWAIT_HOST</Line>
      </Items>
      <Hints lines_count="3">
        <Line>Initializes the trace recorder, but does not start the tracing. In snapshot mode, this must be followed by a vTraceEnable(TRC_START) sometime later.</Line>
        <Line>Starts the tracing directly. In snapshot mode this allows for starting the trace at any point in your code, assuming vTraceEnable(TRC_INIT) has been called in the startup.</Line>
        <Line>TRC_START_AWAIT_HOST: For streaming mode only. Initializes the trace recorder if necessary and waits for a Start command from Tracealyzer ("Start Recording" button). This call is intentionally blocking! By calling vTraceEnable with this option from the startup code, you start tracing at this point and capture the early events.</Line>
      </Hints>
      <Defines lines_count="3">
        <Line>TRC_INIT</Line>
        <Line>TRC_START</Line>
        <Line>TRC_START_AWAIT_HOST</Line>
      </Defines>
    </Type>
  </Types>
</TypesAndGlobals>
