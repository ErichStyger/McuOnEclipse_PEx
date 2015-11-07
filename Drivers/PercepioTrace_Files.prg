%-
%- Percepio FreeRTOS Trace source files
%-
%if defined(StreamingTraceWithRTT) & %StreamingTraceWithRTT='yes'

%FILE %'DirRel_Code'trcRecorder.h
%include PercepioTrace\RTT\trcRecorder.h

%FILE %'DirRel_Code'trcRecorder.c
%include PercepioTrace\RTT\trcRecorder.c

%FILE %'DirRel_Code'trcKernelPort.h
%include PercepioTrace\RTT\trcKernelPort.h

%FILE %'DirRel_Code'trcKernelPort.c
%include PercepioTrace\RTT\trcKernelPort.c

%FILE %'DirRel_Code'trcHardwarePort.h
%include PercepioTrace\RTT\trcHardwarePort.h

%FILE %'DirRel_Code'trcConfig.h
%include PercepioTrace\RTT\trcConfig.h

%FILE %'DirRel_Code'trcPagedEventBuffer.c
%include PercepioTrace\RTT\trcPagedEventBuffer.c

%FILE %'DirRel_Code'trcPagedEventBuffer.h
%include PercepioTrace\RTT\trcPagedEventBuffer.h

%FILE %'DirRel_Code'trcPagedEventBufferConfig.h
%include PercepioTrace\RTT\trcPagedEventBufferConfig.h

%FILE %'DirRel_Code'trcStreamPort.h
%include PercepioTrace\RTT\trcStreamPort.h

%- %FILE %'DirRel_Code'trcTCPIP.c
%- %include PercepioTrace\RTT\trcTCPIP.c

%- %FILE %'DirRel_Code'trcTCPIP.h
%- %include PercepioTrace\RTT\trcTCPIP.h

%- %FILE %'DirRel_Code'trcTCPIPConfig.h
%- %include PercepioTrace\RTT\trcTCPIPConfig.h

%else
%FILE %'DirRel_Code'trcBase.c
%include PercepioTrace\trcBase.c

%FILE %'DirRel_Code'trcKernel.c
%include PercepioTrace\trcKernel.c

%FILE %'DirRel_Code'trcHardwarePort.c
%include PercepioTrace\trcHardwarePort.c

%FILE %'DirRel_Code'trcUser.c
%include PercepioTrace\trcUser.c

%FILE %'DirRel_Code'trcBase.h
%include PercepioTrace\Include\trcBase.h

%FILE %'DirRel_Code'trcConfig.h
%include PercepioTrace\Include\trcConfig.h

%FILE %'DirRel_Code'trcKernelHooks.h
%include PercepioTrace\Include\trcKernelHooks.h

%FILE %'DirRel_Code'trcKernel.h
%include PercepioTrace\Include\trcKernel.h

%FILE %'DirRel_Code'trcHardwarePort.h
%include PercepioTrace\Include\trcHardwarePort.h

%FILE %'DirRel_Code'trcTypes.h
%include PercepioTrace\Include\trcTypes.h

%FILE %'DirRel_Code'trcUser.h
%include PercepioTrace\Include\trcUser.h

%FILE %'DirRel_Code'trcKernelPort.h
%include PercepioTrace\KernelPorts\FreeRTOS\trcKernelPort.h

%FILE %'DirRel_Code'trcKernelPort.c
%include PercepioTrace\KernelPorts\FreeRTOS\trcKernelPort.c

%endif %- StreamingWithTraceRTT