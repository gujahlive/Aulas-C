#include<stdio.h>
int maiorValor(int num, int num2){
	int maior, menor,maior2, menor2;
	maior = num;
	menor = num;
	maior2 = num2;
	menor2 = num2;
	if(num > num2){
		maior = num;
	} else if( maior > num2){
		maior =  
	}else maior = num2;
	
	
	
	return maior; 
}
main(){
	int numero,numero2,numero3,maior;
	printf("Digite: ");
	scanf("%d",&numero);
	printf("Digite: ");
	scanf("%d",&numero2);
	printf("Digite: ");
	scanf("%d",&numero3);
	maior = maiorValor(numero,numero2,numero3);
	printf("NUM MAIOR: %d",maior);
	
}
