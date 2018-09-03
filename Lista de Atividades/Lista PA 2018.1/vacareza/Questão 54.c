#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*

*/

int funsomacol(int, int, int, int);


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int mat[7][6], cont, cont2, l=7, c=6, col, result, *pm;
	
	/*pm=(int**)calloc(7,sizeof(int*));
	
	for(cont=0;cont<7;cont++){
		pm[cont]=(int*)calloc(7,sizeof(int));
	}*/
	
	for(cont=0;cont<l;cont++){
		for(cont2=0;cont2<c;cont2++){
			printf("Informe um número para a posição %d,%d da matriz: ", cont+1, cont2+1);
			scanf("%d", &mat[cont][cont2]);
		}
		printf("\n");
	}
	
	pm= &mat;
	
	system("cls");
	printf("Informe qual coluna você quer somar: ");
	scanf("%d",&col);
	
	result=funsomacol(col,l,c,mat);
	
	for(cont=0;cont<l;cont++){
		for(cont2=0;cont2<c;cont2++){
			printf("%d\t",mat[l][c]);
		}
		printf("\n");
	}
	
	printf("\nA soma da %d° coluna é: %d", col, result);
}

int funsomacol(int COL, int L, int C, int MAT){
	
	int conT,conT2,soma=0;
	
	for(conT=0;conT<7;conT++){
		for(conT2=0;conT2<6;conT2++){
			if(conT2==COL-1){
			soma = soma + MAT[conT][conT2];
			}
		}
	}
	return soma;
}







