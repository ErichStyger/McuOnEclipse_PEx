%-Standard test file created by Bean Wizard 1.33
%if Language='ANSIC'
%if (CPUfamily = "Kinetis")
%elif (CPUfamily = "S32K")
%else
  %error "this component is only supported for ARM (Kinetis, S32K)!"
%endif %-(CPUfamily = "Kinetis")
%else %- Language (& Compiler)
  %error^ This component is not implemented in selected language & compiler !
%endif %- Language (& Compiler)
