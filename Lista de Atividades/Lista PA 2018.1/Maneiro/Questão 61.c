#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
61 - Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba
estas 2 vari�veis e troque o seu conte�do, ou seja, esta fun��o e chamada passando
duas vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B
e B ter� o valor de A.
*/

int *pa, *pb;

void troca(int, int);

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a,b;
	
	printf("Informe o valor de A: ");
	scanf("%d", &a);
	printf("\nInforme o valor de B: ");
	scanf("%d", &b);
	
	pa=a;
	pb=b;
	
	troca(a, b);
	
	a=*pa;
	b=*pb;
	
	system("cls");
	printf("O valor de A �: %d\nO valor de B �: %d", a, b);
}


troca(A, B){
	int t;
	
	t=A;
	A=B;
	B=t;
	pa=&A;
	pb=&B;
	return 0;
}
