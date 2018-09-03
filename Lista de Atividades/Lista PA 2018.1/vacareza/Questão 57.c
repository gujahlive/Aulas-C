#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
57 - Faça uma função recursiva que permita somar os elementos de um vetor de
inteiros.
*/

int *pv;

int func(int, int, int);

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont,n,soma=0,x=0;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	system("cls");
	
	int vet[n];
	pv=&vet;
	
	for(cont=0;cont<n;cont++){
		printf("Informe um valor para a posição %d/%d do vetor: ",cont+1 , n);
		scanf("%d", &vet[cont]);
		printf("\n");
	}
	
	soma=func(n, soma, x);
	system("cls");
	
	printf("A soma de todos os elementos do vetor é: %d",soma);
	
}


func(N, SOMA, X){
	
	if(X==N){
		return SOMA;
	}
	SOMA=SOMA+pv[X];
	X++;
	
	return func(N, SOMA, X);
	
}


