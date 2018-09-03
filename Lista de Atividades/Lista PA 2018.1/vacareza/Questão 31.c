#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
31 - Fazer um programa que lê um conjunto de 10 valores e os imprime ordenados.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int vet[10],cont;
	
	for(cont=0;cont<10;cont++){
		printf("Informe o %d° número para um vetor de 10 posições: ",cont+1);
		scanf("%d", &vet[cont]);
	}
	system("cls");
	for(cont=0;cont<10;cont++){
		printf("%d\t",vet[cont]);
	}
}
