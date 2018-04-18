#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
25 - Dados um inteiro positivo n e uma sequência de n inteiros positivos, determinar o
máximo divisor comum a todos eles.
*/


main(){
    setlocale(LC_ALL, "Portuguese");
    
	int tam,base,cont,div;
	
	printf("Informe o quantos números em sequência você irá digitar: ");
	scanf("%d",&tam);
	
	int vet[tam],vet2[tam];
	
	printf("\n\nInforme o número base para fazermos o MDC: ");
	scanf("%d",&base);
	
	system("cls");
	
	for(cont=0;cont<tam;cont++){
		printf("Informe o %d° número da sequência: ",cont+1);
		scanf("%d",&vet[cont]);
		printf("\n");
	}
	
	for(cont=0;cont<tam;cont++){
		div=1;
		do{
			if(base%div==0 && vet[cont]%div==0){
				vet2[cont]=div;
			}
			div++;
		}while(div<=base);
	}
	
	system("cls");
	
	for(cont=0;cont<tam;cont++){
		printf("O MDC entre %d e %d é %d\n\n", base, vet[cont], vet2[cont]);
	}
	
}
