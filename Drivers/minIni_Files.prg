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
%- minIni source files
%- 
%if defined(MinIniSrcFolderName) & %MinIniSrcFolderName <> ""
  %define  MinIniSrcFolder %'MinIniSrcFolderName'/
%else
  %define  MinIniSrcFolder 
%endif
%if defined(MinIniConfigFolderName) & %MinIniConfigFolderName <> ""
  %define  MinIniConfigFolder %'MinIniConfigFolderName'/
%else
  %define  MinIniConfigFolder 
%endif
%-
%FILE %'DirRel_Code'%'MinIniSrcFolder'minIni.h
%include minIni\minIni.h

%FILE %'DirRel_Code'%'MinIniSrcFolder'minIni.c
%include minIni\minIni.c

%FILE %'DirRel_Code'%'MinIniSrcFolder'minGlue.h
%include minIni\minGlue.h

%FILE %'DirRel_Code'%'MinIniSrcFolder'minGlue-FatFs.h
%include minIni\minGlue-FatFs.h

%FILE %'DirRel_Code'%'MinIniSrcFolder'minGlue-FatFs.c
%include minIni\minGlue-FatFs.c

%FILE %'DirRel_Code'%'MinIniSrcFolder'minIni_NOTICE.txt
%include minIni\NOTICE

%FILE %'DirRel_Code'%'MinIniSrcFolder'minIni_LICENSE.txt
%include minIni\LICENSE

%- dummy code to include the PDF
%if %minIniVersion='dummy'
  %FILE? %'DirRel_Code'%'MinIniSrcFolder'minIni.pdf
  %include minIni\minIni.pdf
%endif

%undef MinIniSrcFolder
%undef MinIniConfigFolder