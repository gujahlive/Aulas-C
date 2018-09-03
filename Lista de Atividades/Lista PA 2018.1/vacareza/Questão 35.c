#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
35 - Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os
termos de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de
tamanho 10.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10],cont,x,soma;
	
	printf("Informe uma razão para saber a P.A da mesma: ");
	scanf("%d", &x);
	soma=x;
	printf("\n");
	for(cont=0;cont<10;cont++){
		vet[cont]=soma;
		soma=soma+x;
	}
	for(cont=0;cont<10;cont++){
		printf("%d\t", vet[cont]);
	}
}
