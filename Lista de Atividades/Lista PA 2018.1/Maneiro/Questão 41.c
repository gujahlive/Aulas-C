#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
41 - Desenvolva um programa que leia uma matriz de tamanho definido pelo usuário e troque
os valores da linha pela coluna (obtendo a matriz transposta), como resultado escreva a matriz
obtida.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int l,lin,c,col;
	
	printf("Informe quantas linhas a matriz terá: ");
	scanf("%d", &lin);
	printf("\nInforme quantas colunas a matriz terá: ");
	scanf("%d", &col);
	int mat[lin][col];
	system("cls");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("Informe um número para a posição %d,%d da matriz: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	system("cls");
	printf("============ Matriz original ============\n\n");
	for(l=0;l<lin;l++){
		for(c=0;c<col;c++){
			printf("%d\t",mat[l][c]);
		}
		printf("\n");
	}
	printf("\n\n=========== Matriz transposta ===========\n\n");
	for(c=0;c<col;c++){
		for(l=0;l<lin;l++){
			printf("%d\t",mat[l][c]);
		}
		printf("\n");
	}
}
