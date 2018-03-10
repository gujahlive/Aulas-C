#include<stdio.h>
main(){
	int vet[5],i;
	for(i=0;i<5;i++){
		printf("Insira: ");
		scanf("%d",&vet[i]);
	}
	for(i=0;i<5;i++){
		printf("Valor: %d na posicao [%d]\n",vet[i],i);
	}
}
