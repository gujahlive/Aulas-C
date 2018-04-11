#include<stdio.h>
#include<stdlib.h>
int sumVet (int n,int *vet){
	int sum,i;
	for (i=0;i<n;i++){
		sum += vet[i];
	}
	return sum; // assim ele só pega o primeiro indice 

}

main(){
	int *vet,i,n,total;
	
	printf("Digite quantas posições quer o vetor: ");
	scanf("%d",&n);
	vet = (int *) malloc (n * sizeof(int));
	for(i=0;i<n;i++){
		printf("Povoe: ");
		scanf("%d",&vet[i]);
		total = sumVet(n,vet);// só passa o primeiro indice (vet), passa o ultimo indice(vet+i)
		
	}
	
	for(i=0;i<n;i++){
		printf("vet[%d]: %d\n",i,vet[i]);
	}
	printf("total: %d",total);
	
	
}
