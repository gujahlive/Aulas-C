#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
32 - Fa�a um programa que leia um vetor de 10 n�meros. Leia um n�mero x. Conte os
m�ltiplos de um n�mero inteiro � x num vetor e mostre-os na tela.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10],x,cont;
	
	printf("Informe um n�mero para saber os 10 primeiros m�ltiplos do mesmo: ");
	scanf("%d", &x);
	for(cont=0;cont<10;cont++){
		vet[cont]=x*(cont+1);
	}
	system("cls");
	printf("Os primeiros 10 m�ltiplos de %d �:\n\n============================================================================\n\n");
	for(cont=0;cont<10;cont++){
		printf("%d\t",vet[cont]);
	}
	printf("\n============================================================================");
}
