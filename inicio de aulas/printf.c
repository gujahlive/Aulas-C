#include<stdio.h>//biblioteca input e output, entrada e saida
#include<string.h>//biblioteca de string, para usar o strcpy e outros
#include<stdlib.h>//executa funções do system(""); mas ta pegando sem
main(){
	int idade,ano_nasc,ano_atual;
	char nome[10],media[5];
	ano_nasc = 1996;
	ano_atual = 2018;
	strcpy(nome,"Gustavo");
	strcpy(media,"Nota");

	
	idade = ano_atual - ano_nasc;
	printf("%s tem %d anos\n",nome, idade);
	
	
	printf("%s %d",media,10);
	
	//system("mkdir teste"); cria pasta
	system("pause");//pausa o sistema e pausa o executável
	//system("cls");// limpa a tela
	
}
