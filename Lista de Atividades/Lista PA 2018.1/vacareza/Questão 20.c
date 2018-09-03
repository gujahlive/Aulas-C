#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
20 - Escreva um algoritmo em C que leia um peso na Terra e o n�mero de um planeta e
imprima o valor do seu peso neste planeta. A rela��o de planetas � dada a seguir
juntamente com o valor das gravidades relativas � Terra:

           1              0,37              Merc�rio
           2              0,88              V�nus
           3              0,38              Marte
           4              2,64              Jupiter
           5              1,15              Saturno
           6              1,17              Urano
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	float peso=0,peson=0;
	int op;
	
	printf("Informe o peso de um objeto em [Kg] quilogramas que se encontra no planeta Terra: ");
	scanf("%f", &peso);
	system("cls");
	printf("Agora informe um n�mero da lista de planetas abaixo em que esse objeto\nser� submetido: ");
	printf("\n\n\n[1]Merc�rio\n\n[2]V�nus\n\n[3]Marte\n\n[4]J�piter\n\n[5]Saturno\n\n[6]Urano\n\nEscolha a op��o e tecle [Enter]: ");
	scanf("%d", &op);
	system("cls");
	switch(op){
		case 1:
			peson=peso*0.37;
			printf("O objeto de %.2fKg ter� em Merc�rio o peso de %.2fKg\n\n\n",peso, peson);
			break;
		case 2:
			peson=peso*0.88;
			printf("O objeto de %.2fKg ter� em V�nus o peso de %.2fKg\n\n\n",peso, peson);
			break;
		case 3:
			peson=peso*0.38;
			printf("O objeto de %.2fKg ter� em Marte o peso de %.2fKg\n\n\n",peso, peson);
			break;
		case 4:
			peson=peso*2.64;
			printf("O objeto de %.2fKg ter� em Jupiter o peso de %.2fKg\n\n\n",peso, peson);
			break;
		case 5:
			peson=peso*1.15;
			printf("O objeto de %.2fKg ter� em Saturno o peso de %.2fKg\n\n\n",peso, peson);
			break;
		case 6:
			peson=peso*1.17;
			printf("O objeto de %.2fKg ter� em Urano o peso de %.2fKg\n\n\n",peso, peson);
			break;
		default:
			printf("Op��o Inv�lida");
			break;
	}
}
