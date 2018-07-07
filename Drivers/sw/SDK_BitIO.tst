%-Standard test file created by Bean Wizard 1.33
%if Language='ANSIC'
%if %PortName='GPIOA'
%elif %PortName='GPIOB'
%elif %PortName='GPIOC'
%elif %PortName='GPIOD'
%elif %PortName='GPIOE'
%elif %PortName='GPIOF'
%elif %PortName='GPIOG'
%elif %PortName=''
%else
  %warning "only GPIOA, GPIOB, GPIOC, GPIOD, GPIOE, GPIOF and GPIOG are currently supported!"
%endif
%else %- Language (& Compiler)
  %error^ This component is not implemented in selected language & compiler !
%endif %- Language (& Compiler)
