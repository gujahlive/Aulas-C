#include<stdio.h>
struct TipoAtleta{
	int matricula,idade;
	float altura;
}Atleta[2];
main(){
	int i, cont=0;
	float sumAltura=0,mediaAltura=0,sumIdade=0,mediaIdade=0;
	printf("-------------------Cadastro Atletas-------------------\n");
	for(i=0;i<2;i++){
		fflush(stdin);
		printf("\tAtleta %d\n",i+1);
		printf("Matricula: ");
		scanf("%d",&Atleta[i].matricula);
		printf("Idade: ");
		scanf("%d",&Atleta[i].idade);
		printf("Altura: ");
		scanf("%f",&Atleta[i].altura);//não está acessando a propriedade, pq????
		sumAltura+=Atleta[i].altura;
		sumIdade+=Atleta[i].idade;
		cont++;
		fflush(stdin);
	}
	mediaIdade = sumIdade /2;
	mediaAltura = sumAltura /2;
	printf("\n-------------------Atletas Cadastrados-------------------\n");
	for(i=0;i<2;i++){
		
		printf("\tAtleta %d\n",i+1);
		printf("Matricula: %d\n",Atleta[i].matricula);
		printf("Idade: %d\n",Atleta[i].idade);
		printf("Altura: %.2f\n",Atleta[i].altura);
	}
	printf("\n-------------------Media Atletas-------------------\n");
	printf("Media Altura: %.2f\n",mediaAltura);
	printf("Media Idade: %.2f\n",mediaIdade);
}
