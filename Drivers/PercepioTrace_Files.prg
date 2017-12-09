%- PEx directory path mapping
%-
%- DirRel_Code            -> Project dir->Generated_Code directory
%- DirRel_Binary          -> Project dir->Source
%- DirRel_Docs            -> Project dir->Documentation
%- DirRel_EventToBinary   -> Project dir
%- DirRel_ProjectSettings -> Project dir->Project_Settings
%- DirRel_Events          -> Project dir->Sources
%- DirRel_BinaryToEvents  -> Project dir
%-
%- Percepio FreeRTOS Trace source files
%-
%if defined(TraceRecorderFolderName) & %TraceRecorderFolderName <> ""
  %define  TraceRecorderFolder %'TraceRecorderFolderName'/
%else
  %define  TraceRecorderFolder 
%endif
%if defined(TraceRecorderConfigFolderName) & %TraceRecorderConfigFolderName <> ""
  %define  TraceRecorderConfigFolder %'TraceRecorderConfigFolderName'/
%else
  %define  TraceRecorderConfigFolder 
%endif
%if defined(TraceRecorderIncludeFolderName) & %TraceRecorderIncludeFolderName <> ""
  %define  TraceRecorderIncludeFolder %'TraceRecorderIncludeFolderName'/
%else
  %define  TraceRecorderIncludeFolder 
%endif
%if defined(TraceRecorderRTTIncludeFolderName) & %TraceRecorderRTTIncludeFolderName <> ""
  %define  TraceRecorderStreamPortJLinkRTTIncludeFolder %'TraceRecorderRTTIncludeFolderName'/
%else
  %define  TraceRecorderStreamPortJLinkRTTIncludeFolder 
%endif
%-
%- ---------------------------------------
%- TraceRecorder
%- ---------------------------------------
%FILE %'DirRel_Code'%'TraceRecorderFolder'tracealyzer_readme.txt
%include PercepioTrace\TraceRecorder\tracealyzer_readme.txt

%FILE %'DirRel_Code'%'TraceRecorderFolder'trcKernelPort.c
%include PercepioTrace\TraceRecorder\trcKernelPort.c

%FILE %'DirRel_Code'%'TraceRecorderFolder'trcSnapshotRecorder.c
%include PercepioTrace\TraceRecorder\trcSnapshotRecorder.c

%FILE %'DirRel_Code'%'TraceRecorderFolder'trcStreamingRecorder.c
%include PercepioTrace\TraceRecorder\trcStreamingRecorder.c

%- ---------------------------------------
%- TraceRecorder/config
%- ---------------------------------------
%FILE %'DirRel_Code'%'TraceRecorderConfigFolder'trcConfig.h
%include PercepioTrace\TraceRecorder\config\trcConfig.h

%FILE %'DirRel_Code'%'TraceRecorderConfigFolder'trcSnapshotConfig.h
%include PercepioTrace\TraceRecorder\config\trcSnapshotConfig.h

%FILE %'DirRel_Code'%'TraceRecorderConfigFolder'trcStreamingConfig.h
%include PercepioTrace\TraceRecorder\config\trcStreamingConfig.h

%- ---------------------------------------
%- TraceRecorder/include
%- ---------------------------------------
%FILE %'DirRel_Code'%'TraceRecorderIncludeFolder'trcHardwarePort.h
%include PercepioTrace\TraceRecorder\include\trcHardwarePort.h

%FILE %'DirRel_Code'%'TraceRecorderIncludeFolder'trcKernelPort.h
%include PercepioTrace\TraceRecorder\include\trcKernelPort.h

%FILE %'DirRel_Code'%'TraceRecorderIncludeFolder'trcPortDefines.h
%include PercepioTrace\TraceRecorder\include\trcPortDefines.h

%FILE %'DirRel_Code'%'TraceRecorderIncludeFolder'trcRecorder.h
%include PercepioTrace\TraceRecorder\include\trcRecorder.h

%- ---------------------------------------
%- TraceRecorder/streamports/Jlink_RTT/include
%- ---------------------------------------
%FILE %'DirRel_Code'%'TraceRecorderStreamPortJLinkRTTIncludeFolder'trcStreamingPort.h
%include PercepioTrace\TraceRecorder\streamports\Jlink_RTT\include\trcStreamingPort.h

%- ---------------------------------------
%undef TraceRecorderFolder
%undef TraceRecorderConfigFolder
%undef TraceRecorderIncludeFolder
%undef TraceRecorderStreamPortJLinkRTTIncludeFolder
