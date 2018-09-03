#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
62 - Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.
*/

int *pa;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int array[5],cont;
	
	pa=&array;
	
	for(cont=0;cont<5;cont++){
		printf("Informe um valor para o array: ");
		scanf("%d", &pa[cont]);
		pa[cont]=pa[cont]*2;
	}
	system("cls");
	for(cont=0;cont<5;cont++){
		printf("%d\t", pa[cont]);
	}
}
