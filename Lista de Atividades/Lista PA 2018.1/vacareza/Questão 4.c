#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
4 - Fa�a a leitura de tr�s valores e apresente como resultado a soma dos quadrados dos tr�s
valores lidos.
*/



main(){
	setlocale(LC_ALL, "Portuguese");
	float v1,v2,v3,result;
	
	printf("Informe o primeiro valor: ");
	scanf("%f", &v1);
	printf("\nInforme o segundo valor: ");
	scanf("%f", &v2);
	printf("\nInforme o terceiro valor: ");
	scanf("%f", &v3);
	result=pow(v1,2)+pow(v2,2)+pow(v3,2);
	printf("\n\nA soma dos quadrados dos valores � igual a %.2f",result);
}
