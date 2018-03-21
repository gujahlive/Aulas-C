#include<stdio.h>
int MaiorElemento(int *pvp ,int m){
	int l,result;
	for (l=0;l<3;l++){
		if (pvp > m ){
			m = pvp; 
		}
	}
	return result;
}
main(){
	int i,vet[3],maior,result,*pv;
	for(i=0; i<3 ; i++){
		printf("Digite: ");
		scanf("%d",&vet[i]);
		pv = vet[i];
		result = MaiorElemento(pv,maior);
	}
	printf("NUM MAIOR: %d",result);
	
	
}
