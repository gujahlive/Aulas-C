#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
13 - Faça um programa que determine a data cronologicamente maior entre duas datas
fornecidas pelo usuário. Cada data deve ser composta por três valores inteiros, em que o
primeiro representa o dia, o segundo, o mês e o terceiro, o ano.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int dia1,mes1,ano1,dia2,mes2,ano2;
	
	printf("Informe o dia da primeira data: ");
	scanf("%d", &dia1);
	printf("\n\nInforme o mês da primeira data: ");
	scanf("%d", &mes1);
	printf("\n\nInforme o ano da primeira data: ");
	scanf("%d", &ano1);
	system("cls");
	printf("Informe o dia da segunda data: ");
	scanf("%d", &dia2);
	printf("\n\nInforme o mês da segunda data: ");
	scanf("%d", &mes2);
	printf("\n\nInforme o ano da segunda data: ");
	scanf("%d", &ano2);
	if(ano1>ano2){
		printf("\n\n%d/%d/%d",dia1,mes1,ano1);
	}else{
		printf("\n\n%d/%d/%d",dia2,mes2,ano2);
	}
}
