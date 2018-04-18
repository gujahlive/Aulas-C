#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
42 - Construa um programa que leia uma matriz 5 x 5. Na sequencia escreva na tela uma
mensagem informando se a matriz lida � sim�trica ou n�o. Obs: uma matriz sim�trica � toda
matriz que � igual a sua transposta.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int l,c,x=0,mat[5][5];
	
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			printf("Informe um n�mero para a posi��o %d,%d da matriz: ", l, c);
			scanf("%d", &mat[l][c]);
		}
	}
	system("cls");
	printf("============ Matriz original ============\n\n");
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			printf("%d\t",mat[l][c]);
		}
		printf("\n");
	}
	printf("\n\n=========== Matriz transposta ===========\n\n");
	for(c=0;c<5;c++){
		for(l=0;l<5;l++){
			printf("%d\t",mat[l][c]);
		}
		printf("\n");
	}
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			if(mat[l][c]==mat[c][l]){
				x++;
			}
		}
	}
	if(x==25){
		printf("\n\nA matriz � sim�trica.");
	}else{
		printf("\n\nA matriz n�o � sim�trica.");
	}
}
