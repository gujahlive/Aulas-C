#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
16 - Tendo como dados de entrada a altura e o sexo de uma pessoa, construa um
algoritmo que calcule seu peso ideal, utilizando as seguintes fórmulas:

                         para homens: (72.7 * h) – 58;
                         para mulheres: (62.1 * h) – 44.7.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	float altura,ideal;
	char sexo;
	
	printf("Informe sua altura: ");
	scanf("%f", &altura);
	fflush(stdin);
	printf("\nInforme seu sexo, informe [m] para masculino ou [f] para feminino: ");
	scanf("%c",&sexo);
	if(sexo=='m'){
		ideal=(72.7*altura)-58;
		printf("A sua altura ideal é %.2f",ideal);
	}
	if(sexo=='f'){
		ideal=(62.1*altura)-44.7;
		printf("A sua altura ideal é %.2f",ideal);
	}
}
