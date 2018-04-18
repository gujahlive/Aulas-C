#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
24 - Dados n números inteiros positivos, calcular a soma dos que são primos.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int soma=0,op=1,num,x=0,cont;
	
	while(op==1){
		printf("Informe um número inteiro positivo: ");
		scanf("%d", &num);
		x=0;
		for(cont=1;cont<=num;cont++){
			if(num%cont==0){
				x++;
			}
		}
		if(x==2){
			soma=soma+num;
		}
		printf("Tecle [1] para adicionar mais números ou [0] para encerrar: ");
		scanf("%d", &op);
		system("cls");
	}
	printf("A soma dos númeors primos é: %d",soma);
}
