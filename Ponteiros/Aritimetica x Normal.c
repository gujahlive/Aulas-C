#include<stdio.h>
#include<stdlib.h>

main(){
	int * vet, i;
	
	//forma tradicional, utilizando �ndice nos colchetes
	vet = (int *) malloc(10*sizeof(int));
	for(i=0; i<10; i++){
		scanf("%d", &vet[i]);
	}
	for(i=0; i<10; i++){
		printf("%d ",vet[i]);
	}
	
	//Utilizando aritm�tica de ponteiros
	
	for(i=0; i<10; i++){
		//N�o utiliza &, porque o ponteiro j� � um endere�o de mem�ria (o que o scanf espera)
		scanf("%d", vet+i);
	}
	for(i=0; i<10; i++){
		printf("%d ", *(vet+i));
	}
	
	
}
