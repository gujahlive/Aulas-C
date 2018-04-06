/*1 – Escreva um algoritmo que em uma função AlocaAnimal capture valores de Animais (nome, idade, espécie) para um vetor com a quantidade determinada pelo usuário.
 Se o usuário quiser cadastrar outros Animais, deve ser reajustado a quantidade que o usuário informar posteriormente mais o que já havia antes.// realloc 
Outra função que dado o vetor atual, informe, utilizando aritmética de ponteiros, o animal mais velho cadastrado no sistema. 
E por último crie uma função que busque o nome de um animal específico e ele mostre os demais dados daquele animal (se houver mais de um com o mesmo nome, mostre todas as ocorrências).
*/
#include<stdio.h>
#include<stdlib.h>
typedef struct{
	char nome [21],especie[21];
	int idade;
	
}Tanimal;

char BuscarAnimal(Tanimal *vetAnimal, char *search){// como vou passar esse vetor aqui???
	
	if (search == vetAnimal[i].nome){
		return vetAnimal[i];
	}
	
}
//Tanimal AlocaAnimal(Tanimal *vet){ } se fran n quer que capture nenhum valor de denttro de uma função!, por quer capturar o nome a idade e a especie nessa função

/*int MenuPrincipal(){
	int escolha;
	printf("\t\t\t\tCadastro Animal");
	printf("1 - Cadastrar Animal\n");
	printf("1 - Cadastrar Animal\n");
	printf("1 - Cadastrar Animal\n");
	printf("1 - Cadastrar Animal\n");
}*/
main(){
	Tanimal *animal;
	int n,i,novosAnimais,result;
	char sorn;
	printf("\t\t\t\tCadastro Animal\n");
	printf("Quantos Animal Deseja Cadastrar? : ");
	scanf("%d",&n);
	animal = (Tanimal *) malloc (n * sizeof(Tanimal));
	for (i = 0 ; i < n ; i++){
		fflush(stdin);
		printf("\t\t\t\tCadastro Animal\n");
		printf("Nome : ");
		gets((*animal).nome);
		fflush(stdin);
		printf("Idade: ");
		scanf("%d",&(*animal).idade);
		fflush(stdin);
		printf("Especie: ");
		gets((*animal).especie);
		fflush(stdin);
		
		//printf("\t\t\t\t\tAnimal Cadastrado\nNome: %s\nIdade: %d\nEspecie: %s\n",(*animal).nome,(*animal).idade,(*animal).especie);
		//AlocaAnimal(&animal);
		
	}
	printf("\t\t\t\tAnimais Cadastrados\n");
	for (i = 0 ; i < n ; i++){
		printf("\t\t\t\tAnimal %d\n",i+1);
		printf("Nome : %s\n",(animal)[i].nome);
		printf("Idade: %d\n",(animal)[i].idade);
		printf("Especie: %s\n",(animal)[i].especie);
		
	}
	printf("deseja cadastrar mais? S=SIM ou N=NAO: ");	
	scanf("%c",&sorn);
	if (sorn == 's'){
		printf("Quantos Animais?: ");
		scanf("%d",&novosAnimais);
		result = n + novosAnimais ; 
		animal = (Tanimal *)  realloc (animal ,result * sizeof(Tanimal));
		// a função aloca animal, vai ter que entrar aqui
		
		
		
	} else 
	if (sorn == 'n'){	
		for (i = 0 ; i < n ; i++){
			printf("\t\t\t\tAnimal %d\n",i+1);
			printf("Nome : %s\n",(animal)[i].nome);
			printf("Idade: %d\n",(animal)[i].idade);
			printf("Especie: %s\n",(animal)[i].especie);		
		}
		
	}

	
	
//	MenuPrincipal();
	
	system("pause");
}
