#include<stdio.h>//biblioteca input e output, entrada e saida
#include<string.h>//biblioteca de string, para usar o strcpy e outros
#include<stdlib.h>//executa fun��es do system(""); mas ta pegando sem
#include<locale.h>//importa a biblioteca de linguas

main(){
	setlocale(LC_ALL, "Portuguese");
	int x,y;
	scanf("%d%d",&x,&y);
	x *= y;

	printf("O valor x � : %d que foi multiplicado por y que � : %d ",x,y);
	
	//system("mkdir teste"); cria pasta
	system("pause");//pausa o sistema e pausa o execut�vel
	//system("cls");// limpa a tela
	
}
