<?xml version="1.0" encoding="UTF-8"?>
<TypesAndGlobals>
  <Types>
    <Type>
      <Type>TEnumSpec</Type>
      <Name>typeSEGGER_RTT_MODE</Name>
      <Items lines_count="3">
        <Line>Skip (Default)</Line>
        <Line>Trim</Line>
        <Line>Block</Line>
      </Items>
      <Hints lines_count="3">
        <Line>Skip. Do not block, output nothing. (Default)</Line>
        <Line>Trim: Do not block, output as much as fits.</Line>
        <Line>Block: Wait until there is space in the buffer.</Line>
      </Hints>
      <Defines lines_count="3">
        <Line>SEGGER_RTT_MODE_NO_BLOCK_SKIP</Line>
        <Line>SEGGER_RTT_MODE_NO_BLOCK_TRIM</Line>
        <Line>SEGGER_RTT_MODE_BLOCK_IF_FIFO_FULL</Line>
      </Defines>
    </Type>
  </Types>
</TypesAndGlobals>
