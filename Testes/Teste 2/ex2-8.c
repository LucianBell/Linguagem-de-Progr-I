/*
Seja vet um vetor de 4 elementos: TIPO vet[4]. Supor que depois da declaração, vet esteja armazenado no endereço de memória 4092 (ou seja, o endereço de vet[0]).
Supor também que na máquina usada uma variável do tipo char ocupa 1 byte, do tipo int ocupa 4 bytes, do tipo float ocupa 4 bytes e do tipo double ocupa 8 bytes.

Qual o valor de vet+1, vet+2 e vet+3 se:

a)      vet for declarado como char?

vet + 0 == 4092
vet + 1 == 4093
vet + 2 == 4094
vet + 3 == 4095

b)      vet for declarado como int?

vet + 0 == 4092
vet + 1 == 4096
vet + 2 == 4100
vet + 3 == 4104

c)      vet for declarado como float?

vet + 0 == 4092
vet + 1 == 4096
vet + 2 == 4100
vet + 3 == 4104

d) vet for declarado como double

vet + 0 == 4092
vet + 1 == 4100
vet + 2 == 4108
vet + 3 == 4116

*/