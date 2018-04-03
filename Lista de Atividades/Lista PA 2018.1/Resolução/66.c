/*66 - Faça um programa que leia um número N e:
* Crie dinamicamente e leia um vetor de inteiro de N posições;
* Leia um número inteiro X e conte e mostre os múltiplos desse número que
existem no vetor.
*/
#include<stdio.h>
#include<stdlib.h>
main(){
	int n,*vet,*x,num,i;
	printf("Insira a quantidade de posições: ");
	scanf("%d",&n);
	vet = (int *) malloc ( n * sizeof(int));
    printf("\nValor de n : %d",n);
	printf("\nendereco: %d\n",vet);
	for(i=0;i<n;i++){
		printf("Povoe: ");
		scanf("%d",&vet[i]);
		printf("indice[%d]: %d\n",i,vet[i]);
	}
	for(i=0;i<n;i++){
		printf("vet: %d \n",vet[i]);
	
	}	
	
	
}
