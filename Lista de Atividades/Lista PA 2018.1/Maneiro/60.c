#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>



/*
60 - Escreva uma fun��o recursiva que determine quantas vezes um d�gito K 
ocorre em um n�mero natural N. Por exemplo, o d�gito 2 ocorre 3 vezes em 
762021192.
*/




int aux=0;
int qvez=0;

int verifica(int n){
    if(n==0)
      return 0;
     else
    {
     if(aux==(n %10))
     {
        qvez++;
     }
     n=n / 10;
     return verifica(n);
    }

 }
 
 
 main(){
 	
 	setlocale(LC_ALL,"Portuguese");
 	
	int numero;
   
   
   
   printf("Digite um numero:");
   scanf("%d",&numero);
   printf("Digite o numero a ser verificado:");
   scanf("%d",&aux);
   verifica(numero);
   printf("Vezes de numeros repetidos %d",qvez);
   
}
