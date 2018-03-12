#include<stdio.h>
int VerificaPositivo(int num){
	int veri;
	if (num >= 0){
		 veri = 1; //printf("POSITIVO");
		//verifica[] = {Positivo} ;
	}else veri = 0; //printf("NEGATIVO"); //verifica[] = {Negativo} ;
	return veri;
}

main(){
	int numero, verifica;
	printf("digite: ");
	scanf("%d",&numero);
	verifica = 	VerificaPositivo(numero);
	if( verifica == 1){
		printf("POSITIVO");
	} else printf("NEGATIVO");
	
	
}
