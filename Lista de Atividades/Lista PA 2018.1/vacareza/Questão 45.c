#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
45 - Faça um programa que permita ao usuário entrar com uma matriz de 3 x 3
números inteiros. Em seguida, gere um array unidimensional pela soma dos números
de cada ´ coluna da matriz e mostrar na tela esse array. Por exemplo, a matriz:

		5 	-8 	10
		1 	2 	15
		25 	10 	7

Vai gerar um vetor, onde cada posição e a soma das colunas da matriz. A primeira
posição será 5 + 1 + 25, e assim por diante: 31 4 3
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat[3][3], vet[3], l, c, soma;
	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("Informe um número para a posição %d,%d da matriz: ", l, c);
			scanf("%d", &mat[l][c]);
			printf("\n");
		}
	}
	for(c=0;c<3;c++){
		soma=0;
		for(l=0;l<3;l++){
			soma=soma+mat[l][c];
		}
		vet[c]=soma;
	}
	system("cls");
	printf("================= Matriz =================\n\n");
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			printf("%d\t",mat[l][c]);
		}
		printf("\n");
	}
	printf("\n\n================= Vetor =================\n\n");
	for(l=0;l<3;l++){
		printf("%d\t", vet[l]);
	}
}
