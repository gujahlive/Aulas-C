#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
53 - Faça uma função que verifica se uma matriz quadrada de ordem N é a matriz
identidade.
*/



int verificaMat(int, int,int**);

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int l,c,controle,lin,col,result,x;
	
	int **pm;
	
	do{
		system("cls");
		controle = 0;
		printf("Informe a quantidade de linhas de uma matriz quadrada: ");
		scanf("%d", &l);
		printf("\nInforme a quantidade de colunas de uma matriz quadrada: ");
		scanf("%d", &c);
		if(l!=c){
			system("cls");
			controle = 1;
			printf("Informe uma quantidade de linhas e colunas iguais\nAperte [ENTER] para continuar...");
			system("pause");
		}
	}while(controle == 1);
	system("cls");
	pm=(int**)calloc(l,sizeof(int*));
	for(x=0;x<l;x++){
		pm[x]=(int*)calloc(c,sizeof(int));
	}
	for(lin=0;lin<l;lin++){
		for(col=0;col<c;col++){
			printf("Informe um número para a posição %d,%d da matriz: ", lin, col);
			scanf("%d", &pm[lin][col]);
		}
	}
	
	result=verificaMat(l,c,pm);
	system("cls");
	
	if(result==1){
		for(lin=0;lin<l;lin++){
			for(col=0;col<c;col++){
				printf("%d\t",pm[lin][col]);
			}
			printf("\n");
		}
		printf("\nÉ uma matriz identidade!");
	}
	if(result==2){
		for(lin=0;lin<l;lin++){
			for(col=0;col<c;col++){
				printf("%d\t",pm[lin][col]);
			}
			printf("\n");
		}
		printf("\nNão é uma matriz identidade!");
	}
}


int verificaMat(int L,int C, int **PM){
	
	int LIN,COL,x=0;
	
	for(LIN=0;LIN<L;LIN++){
		for(COL=0;COL<C;COL++){
			if(LIN==COL && PM[LIN][COL] != 0){
				x++;
			}
			if(LIN!=COL && PM[LIN][COL] != 0){
				x--;
			}
		}
 }
	if(x==L){
		return 1;
	}else{
		return 2;
	}
	
}
