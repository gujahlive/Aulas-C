#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
27 - Faça um programa que gera um número aleatório de 1 a 1000. O usuário deve
tentará acertar qual o número foi gerado, a cada tentativa o programa deverá
informar se o chute é menor ou maior que o número gerado. O programa acaba
quando o usuário acerta o número gerado. O programa deve informar em quantas
tentativas o número foi descoberto
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int nrandom,num,x=0;
	
	srand(time(NULL));
	nrandom=rand()%1000;
	printf("Tente adivinhar o número aleatorio que foi gerado entre 1~1000: ");
	scanf("%d", &num);
	x++;
	if(num!=nrandom){
		if(num>nrandom){
			printf("\n\nO número é menor do que o informado.\n\n");
		}
		if(num<nrandom){
			printf("\n\nO número é maior do que o informado.\n\n");
		}
		do{
			system("pause");
			system("cls");
			printf("Tente adivinhar novamente o número aleatorio que foi gerado entre 1~1000: ");
			scanf("%d", &num);
			if(num>nrandom){
				printf("\n\nO número é menor do que o informado.\n\n");
			}
			if(num<nrandom){
				printf("\n\nO número é maior do que o informado.\n\n");
			}
			x++;
		}while(num!=nrandom);
		system("cls");
		printf("Parabéns, você acertou na %dª tentativa.\n\n",x);
	}
}
