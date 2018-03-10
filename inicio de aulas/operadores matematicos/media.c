#include<stdio.h>//biblioteca input e output, entrada e saida
#include<string.h>//biblioteca de string, para usar o strcpy e outros
#include<stdlib.h>//executa funções do system(""); mas ta pegando sem
#include<locale.h>//importa a biblioteca de linguas

main(){
	setlocale(LC_ALL, "Portuguese");
	char nome[10];
	float n1,n2,n3,n4,media;
	strcpy(nome,"Gustavo");
	fflush(stdin);
	printf("OBS: use VIRGULA e Não PONTO\n");
	printf("Primeira Nota: ");
	scanf("%f",&n1);
	printf("segunda Nota: ");
	scanf("%f",&n2);
	printf("Terceira Nota: ");
	scanf("%f",&n3);
	printf("Quarta Nota: ");
	scanf("%f",&n4);
	media = (n1+n2+n3+n4)/4;
	printf("Media: %.2f - Aluno : %s\n",media,nome);
	
	//system("mkdir teste"); cria pasta
	system("pause");//pausa o sistema e pausa o executável
	//system("cls");// limpa a tela
	
}
