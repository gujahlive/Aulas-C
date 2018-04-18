#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
70 - Faca um programa que leia dois numeros N e M:
 1)Crie e leia uma matriz N x M de inteiros;
 2)Crie e construa uma matriz transposta M x N de inteiros.
 3)Mostre as duas matrizes.
*/



main(){
	setlocale(LC_ALL, "Portuguese");
	
	int **ppm, **ppm2, N, M, cont, l, c;
	
	printf("Informe um número para N: ");
	scanf("%d", &N);
	printf("Informe um número para M: ");
	scanf("%d", &M);
	
	ppm=(int**)calloc(N,sizeof(int*));
	for(cont=0;cont<N;cont++){
		ppm[cont]=(int*)calloc(M,sizeof(int));
	}
	
	ppm2=(int**)calloc(M,sizeof(int*));
	for(cont=0;cont<M;cont++){
		ppm2[cont]=(int*)calloc(N,sizeof(int));
	}
	
	
	for(l=0;l<N;l++){
		for(c=0;c<M;c++){
			printf("Informe um número para a pasição %d,%d da matriz: ",l,c);
			scanf("%d", &ppm[l][c]);
			ppm2[c][l]=ppm[l][c];
		}
	}
	
	system("cls");
	printf("Matriz Original\n\n");
	for(l=0;l<N;l++){
		for(c=0;c<M;c++){
			printf("%d\t",ppm[l][c]);
		}
		printf("\n");
	}
	
	printf("\nMatriz Transposta\n\n");
	for(l=0;l<M;l++){
		for(c=0;c<N;c++){
			printf("%d\t",ppm2[l][c]);
		}
		printf("\n");
	}
	
	
	
}
