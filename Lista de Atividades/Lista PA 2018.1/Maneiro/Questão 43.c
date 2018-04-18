#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
43 - Dadas duas matrizes reais Amxn e Bnxp, calcular o produto de A por B. Obs: Validar se são
multiplicáveis.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int l1,l2,c1,c2,x,c,l;
	
	do{
		printf("Informe quantas linhas a matriz A irá ter: ");
		scanf("%d", &l1);
		printf("\nInforme quantas colunas a matriz A irá ter: ");
		scanf("%d", &c1);
		system("cls");
		printf("Informe quantas linhas a matriz B irá ter: ");
		scanf("%d", &l2);
		printf("\nInforme quantas colunas a matriz B irá ter: ");
		scanf("%d", &c2);
		if(c1!=l2){
			x=0;
			system("cls");
			printf("Para multiplicação de matrizes a quantidade de colunas da matriz A\ntem que ser igual a quantidade de colunas da matriz B.\n\n");
			system("pause");
			system("cls");
		}else{
			x=1;
			system("cls");
		}
	}while(x==0);
	
	
	float Amxn[l1][c1], Bnxp[l2][c2], matpro[l1][c2], temp;
	
	for(l=0;l<l1;l++){
		for(c=0;c<c1;c++){
			printf("Informe um número para a posição %d,%d da matriz A: ", l, c);
			scanf("%f", &Amxn[l][c]);
		}
	}
	for(l=0;l<l2;l++){
		for(c=0;c<c2;c++){
			printf("Informe um número para a posição %d,%d da matriz B: ", l, c);
			scanf("%f", &Bnxp[l][c]);
		}
	}
	
	for(l=0;l<l1;l++){
		for(c=0;c<c2;c++){
			temp=0;
			for(x=0;x<c1;x++){
				temp=temp+Amxn[l][x]*Bnxp[x][c];
			}
			matpro[l][c]=temp;
		}
	}
	system("cls");
	printf("================ Matriz A ================\n\n");
	for(l=0;l<l1;l++){
		for(c=0;c<c1;c++){
			printf("%.2f\t",Amxn[l][c]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	printf("\n\n================ Matriz B ================\n\n");
	for(l=0;l<l2;l++){
		for(c=0;c<c2;c++){
			printf("%.2f\t",Bnxp[l][c]);
		}
		printf("\n");
	}
	printf("\n\n\n");
	printf("\n\n================ Matriz C ================\n\n");
	for(l=0;l<l1;l++){
		for(c=0;c<c2;c++){
			printf("%.2f\t",matpro[l][c]);
		}
		printf("\n");
	}
	
	
}
