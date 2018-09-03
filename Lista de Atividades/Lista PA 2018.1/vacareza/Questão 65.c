#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
65 - Escreva uma função que receba um array de inteiros V e os endereços de duas
variáveis inteiras, min e max, e armazene nessas variáveis o valor mínimo e máximo do
array. Escreva também uma função main que use essa função.
*/

int *pv, *pmai, *pmen;

void func(int);

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont,n;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];
	system("cls");
	
	for(cont=0;cont<n;cont++){
		printf("Informe um número para a posição %d do vetor: ",cont+1);
		scanf("%d", &vet[cont]);
		printf("\n");
	}
	
	pv = &vet;
	func(n);
	
	printf("O maior número do vetor é %d e o menor é %d", *pmai, *pmen);
	
}


func(N){
	
	int maior, menor,cont;
	
	maior = pv[0];
	menor = pv[0];
	
	for(cont=1;cont<N;cont++){
		if(pv[cont]>maior){
			maior=pv[cont];
		}
		if(pv[cont]<menor){
			menor=pv[cont];
		}
	}
	
	pmai=&maior;
	pmen=&menor;
	
	return 0;
	
}
