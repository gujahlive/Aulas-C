#include<stdio.h>
main(){
	int i,vet[3],maior;
	for(i=0; i<3 ; i++){
		printf("Digite: ");
		scanf("%d",&vet[i]);
		maior = vet[i];
	}
	for (i=0;i<3;i++){
		if (vet[i] > maior ){
			maior = vet[i];
		}
	}
	printf("NUM MAIOR: %d",maior);
	
	
}
