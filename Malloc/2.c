/*2- escrever um algoritmo que aloque um vetor dinamicamente de de acordo com um tamanho informado pelo usuário.
 Preencha-o, com valores da tela, verifique o maior valor e depois libere os espaços de memoria ocupado no programa*/
#include<stdio.h>
#include<stdlib.h>
main(){
	int *vet,n,i,maior;
	printf("Informe o tamanho: ");
	scanf("%d",&n);
	vet = (int *) malloc (n * sizeof(int));
	for (i=0 ; i<n ; i++){
		printf("vet[%d]: ",i);
		scanf("%d",&vet[i]);
		maior = vet[i];	
	}
	
	for (i=0 ; i<n ; i++){
		
		if(vet[i] > maior){
			maior = vet[i];
		}
	}
	printf("\n\nmaior: %d\n\n\n\n",maior);
	for(i=0 ; i< n; i++){
		printf("vet[%d]: %d\n",i,vet[i]);
	}
	free(vet);
	vet = NULL;
	printf("LIVRE\n");
	//for(i=0 ; i< n; i++){
	//	printf("vet[%d]: %d\n",i,vet[i]);
	//}
	
}
