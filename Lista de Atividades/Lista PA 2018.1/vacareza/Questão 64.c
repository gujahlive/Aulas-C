#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
64 - Escreva uma fun��o que dado um n�mero real passado como par�metro, retorne
a parte inteira e a parte fracionaria deste n�mero. Escreva um programa que chama
esta fun��o. Prot�tipo: void frac(float num, int* inteiro, float* frac);
*/

int *pfracao, *pinteiro;
float *pnum;

void func();

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float num;
	
	printf("Informe um n�mero real: ");
	scanf("%f", &num);
	pnum= &num;
	
	func();
	
	printf("\nA parte inteira do n�mero � %d e a parte fracionaria � %d", *pinteiro, *pfracao);
	
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



