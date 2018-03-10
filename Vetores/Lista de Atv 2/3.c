#include<stdio.h>
/*3 - Crie um aplicativo em C que peça um número inicial ao usuário, uma razão e calcule os
termos de uma P.A (Progressão Aritmética), armazenando esses valores em um vetor de
tamanho 10.*/
main(){
	int vet[30],i,r,inicio,PA[30],cont=0;
	printf("Quanto é a Razao (de enquanto enquanto vai pular): ");//de enquanto enquanto vai pular
	scanf("%d",&r);
	printf("Qual o inicio");//onde ele vai iniciar a PA//primeiro termo que começa a PA
	scanf("%d",&inicio);
	
	
	for(i=inicio;i<30;i+=r){ 
		printf("%d ",i);
				
		
	}
	
	
}

/*#include<stdio.h>
main(){
	int i,inicio,razao, vet[10],cont=0;
	printf("\t\t\t\tP.A - PROGRESSAO ARITIMERICA:\n");
	printf("Digite o Inicio: ");
	scanf("%d",&inicio);
	printf("Digite o razao: ");
	scanf("%d",&razao);
	for(i=inicio; i<10 ; i+=razao){
		printf("%d\t",i);
		
	}
	
	
	
}*/
