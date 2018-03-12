#include<stdio.h>
int maiorValor(int num, int num2){
	int maior, menor;
	maior = num;
	menor = num;
	if(num < num2){
		menor = num;
	} else  menor = num2;
	return menor; 
}
main(){
	int numero,numero2,menor;
	printf("Digite: ");
	scanf("%d",&numero);
	printf("Digite: ");
	scanf("%d",&numero2);
	menor = maiorValor(numero,numero2);
	printf("NUM MENOR: %d",menor);
	
}
