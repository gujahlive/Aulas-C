#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
22 - Escrever um programa que receba vários números inteiros no teclado e no final
imprimir a média dos números múltiplos de 3. Para sair digitar 0(zero).
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int num,op=1,repet=0;
	float media,soma=0;
	
	while(op>=1){
		printf("Informe um número inteiro: ");
		scanf("%d", &num);
		if(num%3==0){
			soma=soma+num;
			repet++;
		}
		printf("\nPara adicionar mais números tecle [1] para encerrar tecle [0]: ");
		scanf("%d", &op);
		printf("\n");
	}
	system("cls");
	media=soma/repet;
	printf("A média dos números múltiplos de 3 é: %.2f.",media);
}
