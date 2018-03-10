#include<stdio.h>
#include<math.h>
main(){
	int vet[2],i,quad[2],ind[2];
	for(i=0;i<2;i++){
		printf("Insira para ser elevado ao quadrado: ");
		scanf("%d",&vet[i]);
		quad[i] = pow(vet[i],2);
		ind[i] = pow(i,2);
		
		
	}
	for(i=0;i<2;i++){
		
		printf("o numero: %d elevado ao quadrado %d indice elavado: %d \n",vet[i],quad[i],ind[i]);
		
		
	}
}
