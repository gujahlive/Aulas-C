#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
47 �Fa�a um programa que armazena filmes produzidos por v�rios diretores e:
� Crie e leia um vetor de 5 diretores, cada um contendo nome (m�ximo 20
letras), quantidade de filmes e filmes. O membro filmes e um vetor, que deve
ser criado ap�s ter lido quantidade de filmes. Cada filme � composto por nome,
ano e dura��o.
� Procure um diretor por nome, mostrando todos os filmes que ele j� produziu.
Repita o processo at� digitar uma string vazia.
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	
	struct tipodiretor{
		char nomediretor[21];
		int qfilmes;
		
		struct{
			char nomefilme[21];
			int ano,duracao;
		}filme[100];
		
		
	}diretor[2];
	
	int cont,cont2,compara=0,chat;
	char diretord[21];
	
	for(cont=0;cont<5;cont++){
		printf("Informe o nome do %d� diretor: ",cont+1);
		fgets(diretor[cont].nomediretor,20,stdin);
		fflush(stdin);
		printf("\n\nInforme quantos filmes %s fez: ",diretor[cont].nomediretor);
		scanf("%d", &diretor[cont].qfilmes);
		fflush(stdin);
		
		
		for(cont2=0;cont2<diretor[cont].qfilmes;cont2++){
			printf("\n\nInforme o nome do %d� filme de %s : ",cont2+1,diretor[cont].nomediretor);
			fgets(diretor[cont].filme[cont2].nomefilme,20,stdin);
			fflush(stdin);
			printf("\n\nInforme o ano de lan�amento do filme, %s : ",diretor[cont].filme[cont2].nomefilme);
			scanf("%d", &diretor[cont].filme[cont2].ano);
			printf("\n\nInforme a dura��o em minutos do filme %s : ",diretor[cont].filme[cont2].nomefilme);
			scanf("%d", &diretor[cont].filme[cont2].duracao);
			fflush(stdin);
		}
		system("cls");
	}
	do{
		printf("Informe o nome de um diretor: ");
		fgets(diretord,20,stdin);
		chat=strlen(diretord);
		fflush(stdin);
		for(cont=0;cont<5;cont++){
			compara=strcmp(diretord,diretor[cont].nomediretor);
			if(compara==0){
				printf("\n\n\nDiretor: %s\n\nProduziu o(s) filme(s):\n\n",diretor[cont].nomediretor);
				for(cont2=0;cont2<diretor[cont].qfilmes;cont2++){
					printf("========================================\n%s\n\n", diretor[cont].filme[cont2].nomefilme);
					printf("Com dura��o de %d minutos\n\n", diretor[cont].filme[cont2].duracao);
					printf("Lan�ado no ano de %d\n\n", diretor[cont].filme[cont2].ano);
				}
			}
		}
		system("pause");
		system("cls");
	}while(chat!=1);
	
}
