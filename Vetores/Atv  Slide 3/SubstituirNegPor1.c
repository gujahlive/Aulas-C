#include<stdio.h>
main(){
	int vet[3],vet2[3],i;
	

	
	for (i=0;i<3;i++){
		printf("povoe o segundo vetor com numeros negativos: ");
		scanf("%d",&vet2[i]);
		if(vet2[i]<0){
			vet2[i] = 1;
		} else {
			vet[i] = vet2[i];
		}
	
	}
	for (i=0;i<3;i++){
		printf("Numeros do vetor: %d Posição: %d\n",vet[i],i);
	} 	
	
	
}
