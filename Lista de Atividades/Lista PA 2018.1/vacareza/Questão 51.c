#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
51 - Crie uma fun��o que receba tr�s valores, 'a', 'b' e 'c', que s�o os coeficientes de uma
equa��o do segundo grau e retorne o valor do delta, que � dado por 'b� - 4ac'.
*/

int calculadelta(int, int, int);


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b, c, delta;
	
	printf("Informe o valor de a: ");
	scanf("%d", &a);
	printf("\nInforme o valor de b: ");
	scanf("%d", &b);
	printf("\nInforme o valor de c: ");
	scanf("%d", &c);
	
	delta=calculadelta(a, b, c);
	
	system("cls");
	printf("O valor de delta �: %d", delta);
}


calculadelta(A, B, C){
	
	int DELTA;
	
	DELTA = pow(B,2)-4*A*C;
	
	return DELTA;
}
