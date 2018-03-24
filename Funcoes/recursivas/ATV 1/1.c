#include<stdio.h>
int MaiorElemento(int *pvp){
	int result=*pvp,l;
	for (l=0;l<3;l++){
		if ( pvp[l]  > result ){
			result = pvp[l]; 
		} else result =result ;
	}
	return result;
}
main(){
	int i,vet[3],maior,r,*pv;
	for(i=0; i<3 ; i++){
		printf("Digite: ");
		scanf("%d",&vet[i]);
		
	}
	r= MaiorElemento(vet);
	printf("NUM MAIOR: %d",r);
	
	
}
