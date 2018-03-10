#include<stdio.h>
main(){
	int  l,vet[4],maior=0,menor=0;
	for (l=0 ; l<4 ; l++){
		scanf("%d",&vet[l]);
		maior = vet[l];
		menor = vet[l];
	}

	
	for (l=0 ; l<4 ; l++){
		if(vet[l] > maior){
			maior = vet[l];
			
		} else if(vet[l] < menor){
				menor = vet[l];
		} 
	}
	
	for(l = 0 ; l < 4 ; l++ ){
		printf("%d\t",vet[l]);
	}
	
	printf("\nMaior do vetor: %d\nMenor do Vetor: %d",maior,menor);
		
}
	
	

