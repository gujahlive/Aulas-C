#include<stdio.h>
int MaiorElemento(int v[] ,int m){
	int l;
	for (l=0;l<3;l++){
		if (v[l] > m ){
			m = v[l];
		}

}
}
main(){
	int i,vet[3],maior,result;
	for(i=0; i<3 ; i++){
		printf("Digite: ");
		scanf("%d",&vet[i]);
		maior = vet[i];
	    result = MaiorElemento(vet[],maior);
	}

	
	printf("NUM MAIOR: %d",result);
	
	
}
