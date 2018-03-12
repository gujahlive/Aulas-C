#include<stdio.h>
int verificaNulo(int num){
	int veri;
	if(num == 0){
		veri = 1;
	}else veri = 0 ;
	
	
}
main(){
	int numero,verifica;
	printf("Digite: ");
	scanf("%d",&numero);
	verifica = verificaNulo(numero);
	if(verifica == 1){
		printf("NUM VALIDO");
	}else printf("NUM NULO");
	
	
}
