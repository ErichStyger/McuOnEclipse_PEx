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
%- FatFS source files
%- 
%-
%FILE %'DirRel_Code'integer.h
%include FatFS\src\integer.h

%FILE %'DirRel_Code'diskio.h
%include FatFS\src\diskio.h

%- diskio.c is *not* used. Instead, the functions are in FAT1.c
%- %FILE %'DirRel_Code'diskio.c
%- %include FatFS\src\diskio.c

%FILE %'DirRel_Code'ff.h
%include FatFS\src\ff.h

%FILE %'DirRel_Code'ff.c
%include FatFS\src\ff.c

%FILE %'DirRel_Code'ffconf.h
%include FatFS\src\ffconf.h

%FILE %'DirRel_Code'00readme.txt
%include FatFS\src\00readme.txt

%if %CodePage='932'
  %FILE? %'DirRel_Code'cc932.c
  %include FatFS\src\option\cc932.c
%elif %CodePage='936'
  %FILE? %'DirRel_Code'cc936.c
  %include FatFS\src\option\cc936.c
%elif %CodePage='949'
  %FILE? %'DirRel_Code'cc949.c
  %include FatFS\src\option\cc949.c
%elif %CodePage='950'
  %FILE? %'DirRel_Code'cc950.c
  %include FatFS\src\option\cc950.c
%elif %UseLFN != '0'
  %FILE? %'DirRel_Code'ccsbcs.c
  %include FatFS\src\option\ccsbcs.c
%endif
