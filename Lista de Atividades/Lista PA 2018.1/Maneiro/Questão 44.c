#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
44 - Leia duas matrizes 4 x 4 e escreva uma terceira com os maiores valores de cada
posição das matrizes lidas.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat1[4][4], mat2[4][4], mat3[4][4], l, c;
	
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("Informe um número para a posição %d,%d da primeira matriz: ", l, c);
			scanf("%d", &mat1[l][c]);
			
			printf("Informe um número para a posição %d,%d da segunda matriz: ", l, c);
			scanf("%d", &mat2[l][c]);
			
			if(mat1[l][c]>=mat2[l][c]){
				
				mat3[l][c]=mat1[l][c];
			}else{
				mat3[l][c]=mat2[l][c];
			}
		}
	}
	system("cls");
	printf("================ Matriz 1 ================\n\n");
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%d\t",mat1[l][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("================ Matriz 2 ================\n\n");
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%d\t",mat2[l][c]);
		}
		printf("\n");
	}
	printf("\n\n");
	printf("================ Matriz 3 ================\n\n");
	for(l=0;l<4;l++){
		for(c=0;c<4;c++){
			printf("%d\t",mat3[l][c]);
		}
		printf("\n");
	}
}
