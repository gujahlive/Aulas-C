#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
50 - Usando a estrutura fornecida, referente a atletas, elabore um programa para ler
os dados de 15 atletas de uma equipe, calcular a m�dia das idades e das alturas, e
finalmente, exibir os dados lidos e as duas m�dias calculadas.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	struct tipoatleta{
		int matricula,idade;
		float altura;
	}atleta[15];
	float mediai=0,mediaa=0;
	int cont,x=0;
	
	for(cont=0;cont<15;cont++){
		x++;
		printf("Informe a matrucula do %d� atleta: ",cont+1);
		scanf("%d", &atleta[cont].matricula);
		printf("\n\nInforme a idade do %d� atleta: ",cont+1);
		scanf("%d", &atleta[cont].idade);
		printf("\n\nInforme a altura do %d� atleta: ",cont+1);
		scanf("%f", &atleta[cont].altura);
		mediaa=atleta[cont].altura+mediaa;
		mediai=atleta[cont].idade+mediai;
		system("cls");
	}
	system("cls");
	mediaa=mediaa/x;
	mediai=mediai/x;
	printf("Os dados dos atletas cadastrados s�o: \n\n\n");
	for(cont=0;cont<15;cont++){
		printf("========================================\n\nAtleta: %d\n\nMatricula: %d\n\nIdade: %d\n\nAltura: %.2f\n\n\n", cont+1, atleta[cont].matricula, atleta[cont].idade, atleta[cont].altura);
	}
	printf("A m�dia das idades dos atletas � %.2f anos, e a m�dia das alturas � %.2f metros", mediai, mediaa);
}
