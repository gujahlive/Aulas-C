#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
11 - Fa�a um programa que receba tr�s n�meros e mostre-os em ordem crescente.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int num=0,num2=0,num3=0;
	
	printf("Informe o 1� n�meros para saber a ordem crescente: ");
	scanf("%d",&num);
	printf("\n\nInforme o 2� n�mero para saber a ordem crescente: ");
	scanf("%d",&num2);
	printf("\n\nInforme o 3� n�mero para saber a ordem crescente: ");
	scanf("%d",&num3);
	if(num>num2 && num2>num3){
		printf("\n\n A ordem crescente �: %d, %d, %d",num3,num2,num);
	}
	if(num3>num2 && num2>num){
		printf("\n\n A ordem crescente �: %d, %d, %d",num,num2,num3);
	}
	if(num2>num3 && num3>num){
		printf("\n\n A ordem crescente �: %d, %d, %d",num,num3,num2);
	}
	if(num>num3 && num3>num2){
		printf("\n\n A ordem crescente �: %d, %d, %d",num2,num3,num);
	}
	if(num3>num && num>num2){
		printf("\n\n A ordem crescente �: %d, %d, %d",num2,num,num3);
	}
	if(num2>num && num>num3){
		printf("\n\n A ordem crescente �: %d, %d, %d",num3,num,num2);
	}
}
