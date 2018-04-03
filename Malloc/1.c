/*1- Criar um algoritmo que guarde uma estrutura de Atletas: 
*Nome
*Idade
*Categoria
e aloque dinamicamente um atleta, solicitando os dados ao usuário, após isso, eexiba os dados na tela;

*/

#include<stdio.h>
#include<stdlib.h>
typedef struct {
char nome [21],categoria;
int idade;

}Tatleta;
main(){
	Tatleta *atleta;
	atleta= (Tatleta *) malloc (sizeof(Tatleta));
	printf("\t\t\t\t\t\t\tAloque o Atleta \n");

	printf("Categoria: A = ADULTO - I = INFANTIL: ");
	scanf("%c",&(*atleta).categoria);
	fflush(stdin);
	printf("Nome: ");
	gets((*atleta).nome);
	fflush(stdin);
	printf("Idade: ");
	scanf("%d",&(*atleta).idade);
	
	
	printf("\t\t\t\t\t\t\tDados do Atleta: \n");
	printf("Categoria: %c\n",(*atleta).categoria);
	printf("Idade: %d\n",(*atleta).idade);
	printf("Nome: %s\n",(*atleta).nome);
	
	


}



