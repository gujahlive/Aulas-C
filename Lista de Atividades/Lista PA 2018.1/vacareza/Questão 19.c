#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
/*
19 – Criar um algoritmo em C que receba o valor de x, e calcule e imprima o valor de
f(x).
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	float fx,x;
	
	printf("Informe o valor de X: ");
	scanf("%f", &x);
	if(x<=1){
		fx=1;
	}
	if(x>1 && x<=2){
		fx=2;
	}
	if(x>2 && x<=3){
		fx=pow(x,2);
	}
	if(x>3){
		fx=pow(x,3);
	}
	printf("\n\nF(x)= %.2f",fx);
}
