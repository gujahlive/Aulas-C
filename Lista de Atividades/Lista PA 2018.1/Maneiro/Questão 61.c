#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
61 - Faça um programa que leia 2 valores inteiros e chame uma função que receba
estas 2 variáveis e troque o seu conteúdo, ou seja, esta função e chamada passando
duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B
e B terá o valor de A.
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
	printf("O valor de A é: %d\nO valor de B é: %d", a, b);
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
