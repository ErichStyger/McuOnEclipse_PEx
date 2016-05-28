%-Standard test file created by Bean Wizard 1.33
%if Language='ANSIC'
%else %- Language (& Compiler)
  %error^ This bean is not implemented in selected language & compiler !
%endif %- Language (& Compiler)
%if %DynamicAllocation='no' & %StaticAllocation='no'
  %error configSUPPORT_STATIC_ALLOCATION and configSUPPORT_DYNAMIC_ALLOCATION cannot both be 0, but can both be 1.
%endif
