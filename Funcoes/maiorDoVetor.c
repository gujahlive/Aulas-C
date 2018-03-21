#include<stdio.h>
#define tam 3
int maiorNum(int *pv ){
int j,maior=pv[0];
for(j=0;j<tam;j++){
		if(pv [j] > maior){
			maior = pv[j];
		}
	}
	return maior;
}

main(){
	int i, vet[tam],maior;
	for(i=0;i<tam;i++){
		printf("Insira: ");
		scanf("%d",&vet[i]);
	}
	int p = maiorNum(&vet);
	printf("maior numero digitado: %d",p);
	
	
}
