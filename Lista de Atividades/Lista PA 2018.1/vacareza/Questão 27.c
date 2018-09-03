#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
27 - Fa�a um programa que gera um n�mero aleat�rio de 1 a 1000. O usu�rio deve
tentar� acertar qual o n�mero foi gerado, a cada tentativa o programa dever�
informar se o chute � menor ou maior que o n�mero gerado. O programa acaba
quando o usu�rio acerta o n�mero gerado. O programa deve informar em quantas
tentativas o n�mero foi descoberto
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int nrandom,num,x=0;
	
	srand(time(NULL));
	nrandom=rand()%1000;
	printf("Tente adivinhar o n�mero aleatorio que foi gerado entre 1~1000: ");
	scanf("%d", &num);
	x++;
	if(num!=nrandom){
		if(num>nrandom){
			printf("\n\nO n�mero � menor do que o informado.\n\n");
		}
		if(num<nrandom){
			printf("\n\nO n�mero � maior do que o informado.\n\n");
		}
		do{
			system("pause");
			system("cls");
			printf("Tente adivinhar novamente o n�mero aleatorio que foi gerado entre 1~1000: ");
			scanf("%d", &num);
			if(num>nrandom){
				printf("\n\nO n�mero � menor do que o informado.\n\n");
			}
			if(num<nrandom){
				printf("\n\nO n�mero � maior do que o informado.\n\n");
			}
			x++;
		}while(num!=nrandom);
		system("cls");
		printf("Parab�ns, voc� acertou na %d� tentativa.\n\n",x);
	}
}
