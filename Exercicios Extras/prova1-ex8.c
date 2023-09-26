#include <stdio.h>
#include <stdlib.h>
#include <string.h>

main() {
 char nome[30],M;
 int x,t,soma=0;
 float percent, t2=0;
 printf("Digite um nome: ");
 gets(nome);
 t=strlen(nome);
 for(x=0;x<=t;x++)
 if(nome[x]=='a' || nome[x]=='A' || nome[x]=='e' || nome[x]=='E' ||
 nome[x]=='i' || nome[x]=='I' || nome[x]=='o'|| nome[x]=='O' ||
 nome[x]=='u' || nome[x]=='U')
 soma++;
 percent=soma*100/ (float) t;

 printf(" %d - %d - %3.2f ",t, soma, percent);
 return(0);
}
