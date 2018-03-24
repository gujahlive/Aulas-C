/*50 - Usando a estrutura fornecida, referente a atletas, elabore um programa para ler
os dados de 15 atletas de uma equipe, calcular a média das idades e das alturas, e
finalmente, exibir os dados lidos e as duas médias calculadas. */

/*
struct da questão

struct TipoAtleta{
	int matricula;
	int idade;
	float altura;
};


*/

#include<stdio.h>

struct TipoAtleta{
	int matricula;
	int idade;
	float altura;
};
main(){
	struct TipoAtleta atleta[3];
	float mediaIdade,sumIdade,mediaAltura,sumAltura;
	int i;
	for (i=0;i<3;i++){
		printf("\n");
		printf("Matricula %d: ",i+1);
		scanf("%d",&atleta[i].matricula);
		printf("Idade %d: ",i+1);
		scanf("%d",&atleta[i].idade);
		sumIdade += atleta[i].idade; 
		printf("Altura %d: ",i+1);
		scanf("%f",&atleta[i].altura);
		sumAltura += atleta[i].altura; 
		
	
	}
	mediaIdade = sumIdade /3;
	mediaAltura = sumAltura /3;
	
	for (i=0;i<3;i++){
		printf("Matricula %d: %d\n",i+1,atleta[i].matricula);
		printf("Idade %d: %d\n",i+1,atleta[i].idade);
		printf("Altura %d: %.2f\n",i+1,atleta[i].altura);
		printf("\n");
	}
	printf("Media Idade: %.2f\n",mediaIdade);
	printf("Media Altura: %.2f",mediaAltura);
	
	
}
