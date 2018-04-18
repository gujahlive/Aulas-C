#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>
#include <time.h>

/*54 - Faça uma função que recebe, por parâmetro, uma matriz A[7][6]
e uma coluna N e retorne a soma dos elementos dessa coluna..

*/

int somaM(int matriz[7][6]) { 
int soma = 0, i; 
	for (i=0; i<7; i++){
		//soma += matriz[2][i]; 
		for (i=0; i<7; i++) {
		soma += matriz[i][4]; 
		}
	} 
	


return (soma ); 
} 

main() { 

srand(time(NULL));

int x[7][6], i, j; 
	for (i=0; i<7; i++){
		for (j=0; j<6; j++) {
		//scanf("%d", &x[i][j]);
		x[i][j] = rand()%10;
		}
	}
	
	for (i=0; i<7; i++){
		for (j=0; j<6; j++) {
		printf(" %d ", x[i][j]);
		
		}
		printf("\n");
	}
	
	printf("Soma da coluna 4: %d", somaM(x)); 
 
}
