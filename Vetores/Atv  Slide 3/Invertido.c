#include<stdio.h>
main(){
	int vet[10],i;
	for(i=0 ; i<10 ; i++){
		printf("Digite os numeros: ");
		scanf("%d",&vet[i]);
	}
	printf("\n");
	printf("Numeros em ordem inversa:\n ");
	for(i=9 ; i>=0 ; i--){
			printf("%d\t",vet[i]);
		
	
	}
}
