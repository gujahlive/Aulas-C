#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
64 - Escreva uma função que dado um número real passado como parâmetro, retorne
a parte inteira e a parte fracionaria deste número. Escreva um programa que chama
esta função. Protótipo: void frac(float num, int* inteiro, float* frac);
*/

int *pfracao, *pinteiro;
float *pnum;

void func();

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Informe um número real: ");
	scanf("%f", &num);
	pnum= &num;
	
	func();
	
	printf("\nA parte inteira do número é %d e a parte fracionaria é %d", *pinteiro, *pfracao);
	
}



func(){
	
	float NUM=*pnum;
	int inte;
	int frac;
	
	inte = (NUM/2)*2;
	frac = (NUM - inte)*100;
	
	pinteiro = &inte;
	pfracao = &frac;
	
	return 0;
	
}



