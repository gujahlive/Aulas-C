#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
37 - Escrever uma função que recebe uma string e um caractere como parâmetro e
remove todas as ocorrências do caractere do string.
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	
	char letra, nome[51], NovoNome[51];
	int cont,t,p=0;
	
	printf("Informe um nome: ");
	fgets(nome,50,stdin);
	fflush(stdin);
	system("cls");
	printf("Informe uma letra para ser retirada do nome: ");
	scanf("%c", &letra);
	t=strlen(nome);
	for(cont=0;cont<=t;cont++){
		if(nome[cont]!= letra){
			NovoNome[p]=nome[cont];
			p++;
		}
	}
	system("cls");
	printf("========================================\n\nNome informado: %s\n\nLetra retirada: %c\n\nNome sem a letra: %s\n\n========================================", nome, letra, NovoNome);
}

