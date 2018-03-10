#include<stdio.h>

main(){

	int fat, n, numdigitado;
	
	printf("Insira um numero para  ver o fatorial: ");
	scanf("%d", &n);
	numdigitado = n;	
	for(fat = 1; n > 1; n = n - 1){
	
	fat = fat * n;
	
	}

printf("numero digitado: %d fatorial: %d",numdigitado,fat);

}
