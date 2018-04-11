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




/*char BuscarAnimal(Tanimal *vetAnimal, char *search){// como vou passar esse vetor aqui???
    int i;// posição pra varrer, vai precisar de um for
	if (search == vetAnimal[i].nome){
		return vetAnimal[i];
	}
	
}*/
		
/*int MenuPrincipal(){
	int escolha;
	printf("\t\t\t\tCadastro Animal");
	printf("1 - Cadastrar Animal\n");
	printf("1 - Cadastrar Animal\n");
	printf("1 - Cadastrar Animal\n");
	printf("1 - Cadastrar Animal\n");
}*/
Tanimal ExibeAnimal(int quant){

Tanimal *animal;
int i;
	printf("\t\t\t\tAnimais Cadastrados\n");
	for (i = 0 ; i < quant ; i++){
		printf("\t\t\t\tAnimal %d\n",i+1);
		printf("Nome : %s\n",animal[i].nome);
		printf("Idade: %d\n",animal[i].idade);
		printf("Especie: %s\n",animal[i].especie);
		
	}


}


Tanimal AlocaAnimal(int quant){	
Tanimal *animal;
int i;
animal = (Tanimal *) malloc (quant * sizeof(Tanimal));
for (i = 0 ; i < quant ; i++){
		fflush(stdin);
		printf("\t\t\t\tCadastro Animal\n");
		printf("Nome : ");	
		gets((animal+i)->nome);// como vou colocar o indice AQUI??
		fflush(stdin);
		printf("Idade: ");
		scanf("%d",&(animal+i)->idade);
		//scanf("%d",&animal[i].idade);
		fflush(stdin);
		printf("Especie: ");
		gets((animal+i)->especie);
	//	gets(animal[i].especie);
		fflush(stdin);
//		animal++;
		//printf("\t\t\t\t\tAnimal Cadastrado\nNome: %s\nIdade: %d\nEspecie: %s\n",(*animal).nome,(*animal).idade,(*animal).especie);
		//AlocaAnimal(&animal);
	    ExibaAnimal(animal);	

	}
	
	for (i = 0 ; i < quant ; i++){
		printf("\t\t\t\tAnimal %d\n",i+1);
		printf("Nome : %s\n",animal[i].nome);
		printf("Idade: %d\n",animal[i].idade);
		printf("Especie: %s\n",animal[i].especie);
		}




}
main(){
	//Tanimal *animal;
	int n,n1,i,novosAnimais,result;
	char sorn;
	printf("\t\t\t\tCadastro Animal\n");
	printf("Quantos Animal Deseja Cadastrar? : ");
	scanf("%d",&n);
	AlocaAnimal(n);
	
	printf("deseja cadastrar mais? S=SIM ou N=NAO: ");	
	scanf("%c",&sorn);
	if (sorn == 's'){
		printf("Quantos Animais?: ");
		scanf("%d",&novosAnimais);
		//result = n + novosAnimais ; esse calculo vai entrar numa função de realocar; 
		//animal = (Tanimal *)  realloc (animal ,result * sizeof(Tanimal));
		AlocaAnimal(result);// vai pra função de reallocar
		// a função aloca animal, vai ter que entrar aqui	
		
		
	} else 
	if (sorn == 'n'){	
		ExibeAnimal(n);
		
	}

	
	
//	MenuPrincipal();
	
	system("pause");
}
