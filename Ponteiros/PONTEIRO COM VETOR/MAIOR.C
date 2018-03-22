#include<stdio.h>
int maiorNum(int *pv){
	int m = *pv,j;
	for(j=0;j<3;j++){
		if (pv[j] > m ){
			m = pv[j];
		}else m = m;				
	}	
	return m;		
}
main(){
	int i,vetor[3],*v,maior;
	for (i=0;i<3;i++){
		printf("Povoe: ");
		scanf("%d",&vetor[i]);
	}
	maior = maiorNum(vetor);

	printf("Maior Numero: %d\n",maior);
}
