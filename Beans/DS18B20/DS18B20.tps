<?xml version="1.0" encoding="UTF-8"?>
<TypesAndGlobals>
  <Types>
    <Type>
      <Type>TBoolSpec</Type>
      <Name>typeConnMode</Name>
      <Items lines_count="2">
        <Line>Multiple slaves</Line>
        <Line>One slave</Line>
      </Items>
      <Hints lines_count="2">
        <Line>Multiple slaves on the 1-Wire bus</Line>
        <Line>The DS18B20 is the only device on the bus</Line>
      </Hints>
      <Defines lines_count="2">
        <Line>CONN_MULTI_SLAVE</Line>
        <Line>CONN_ONE_SLAVE</Line>
      </Defines>
    </Type>
    <Type>
      <Type>TBoolSpec</Type>
      <Name>typeReadTemp</Name>
      <Items lines_count="2">
        <Line>Auto</Line>
        <Line>With ReadTemperature()</Line>
      </Items>
      <Defines lines_count="2">
        <Line>DS_READ_AUTO</Line>
        <Line>DS_READ_MAN</Line>
      </Defines>
    </Type>
  </Types>
</TypesAndGlobals>
