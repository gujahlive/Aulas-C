#include<stdio.h>
#include<stdlib.h>

main(){
	int * vet, i;
	
	//forma tradicional, utilizando índice nos colchetes
	vet = (int *) malloc(10*sizeof(int));
	for(i=0; i<10; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<10; i++){
		printf("%d ",vet[i]);
	}
	
	//Utilizando aritmética de ponteiros
	
	for(i=0; i<10; i++){
		//Não utiliza &, porque o ponteiro já é um endereço de memória (o que o scanf espera)
		scanf("%d", vet+i);
	}
	for(i=0; i<10; i++){
		printf("%d ", *(vet+i));
	}
	
	
}
