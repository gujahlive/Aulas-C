/*36 - Fazer um programa em C que solicita um número inteiro e soletra o mesmo na
tela. Ex: 124: um, dois, quatro.*/
#include<stdio.h>
main(){
	char ciquenta[] = {"5,0"};
			
	char extenso[15];
	int n;
	printf("Digite: %s",ciquenta);
	scanf("%d",&n);
	if (n == 1){
		printf(" um ");
	}
	if(n == 2){
		printf(" dois ");
	}
	
	if (n == 3){
		printf(" tres ");
	}
	if(n == 4){
		printf(" Quatro");
	}
	
	if (n == 5){
		printf(" cinco ");
	}
	if(n == 6){
		printf(" seis ");
	}
	
	if (n == 7){
		printf(" sete ");
	}
	if(n == 8){
	 printf(" oito");
	}
	
	if (n == 9){
		printf(" nove ");
	}
	if(n == 0){
		printf(" zero ");
	}
}
