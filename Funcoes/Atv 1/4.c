#include<stdio.h>
int maiorValor(int num, int num2){
	int maior, menor;
	maior = num;
	menor = num;
	if(num > num2){
		maior = num;
	} else  maior = num2;
	return maior; 
}
main(){
	int numero,numero2,maior;
	printf("Digite: ");
	scanf("%d",&numero);
	printf("Digite: ");
	scanf("%d",&numero2);
	maior = maiorValor(numero,numero2);
	printf("NUM MAIOR: %d",maior);
	
}
