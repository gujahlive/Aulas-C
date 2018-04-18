#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <time.h>

/*55 - (a) Escreva uma função que recebe uma matriz real Amxn e 
determina a sua transposta (Se B é a matriz transposta de A então aij = bji).

*/



main() { 
	
	setlocale(LC_ALL,"Portuguese");
	
	int mat[3][3],mat2[3][3],lin,col,cont1=0;
	
	
	for(lin=0;lin<3;lin++){
		for(col=0;col<3;col++){
			
			printf("Digite o valor na linha [%d] e na posição [%d] : ",lin,col);
			scanf("%d",&mat[lin][col]);
			
		}
			printf("\n");
	}
	printf("_________MAT 2 ____________");
	printf("\n");
	for(lin=0;lin<3;lin++){
		for(col=0;col<3;col++){
			
			printf("Digite o valor na linha [%d] e na posição [%d] : ",lin,col);
			scanf("%d",&mat2[lin][col]);
			
		}
			printf("\n");
	}
	
		for(col=0;col<3;col++){
			for(lin=0;lin<3;lin++){
				
				
				if(mat2[lin][col] == mat[lin][col]){
					cont1++;
				}
				
			
			}
			printf("\n");
	
	}
	
	
	
	
	
	
		if(cont1==9){
			printf("A e B  são iguais");
		}else{
			printf("Não são iguais");
		}
	
		printf("\n");
		printf("\n");
		printf("\n");
		
	int cont=0;
		
	for(lin=0;lin<3;lin++){
			for(col=0;col<3;col++){
			if((lin==col) && (mat[lin][col]==1)){
				cont++;
			}
			
		}
		printf("\n");
	}
	int cont2=0;
		for(lin=0;lin<3;lin++){
			for(col=0;col<3;col++){
				if((lin!=col) && mat[lin][col]==0){
					cont2++;
				}
			}
			
		}
		
	
	
		for(lin=0;lin<3;lin++){
			for(col=0;col<3;col++){
			
				printf(" %d ",mat[lin][col]);
			}	
		printf("\n");
	}
	
//	printf("%d",cont);
	printf("\n");
//	printf("%d",cont2);
	printf("\n");
	//cont2 = cont2 -4;
	printf("\n");
//	printf("%d",cont2);
	printf("\n");
	if((cont==3) && (cont2==6)){
		printf("É identidade");
	}else{
		printf("Não é identidade");
	}
		
		

}
