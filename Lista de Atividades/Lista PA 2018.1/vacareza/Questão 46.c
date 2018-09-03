#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
46 – Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media Final),
armazenando em um vetor. Uma vez lidos os dados, dívida estes dados em 2 novos
vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a media
mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de
aprovados, seguido dos dados do vetor de reprovados.
*/

struct tipoaluno{
	char nome[51];
	int matricula;
	float mediaf;
}aluno[10],alunoA[10],alunoR[10];


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont,x=0,y=0;
	
	for(cont=0;cont<10;cont++){
		printf("Informe o nome do %d° aluno: ",cont+1);
		fgets(aluno[cont].nome,50,stdin);
		fflush(stdin);
		printf("\nInforme a matricula do %d° aluno: ",cont+1);
		scanf("%d", &aluno[cont].matricula);
		printf("\nInforme a média final do %d° aluno: ",cont+1);
		scanf("%f", &aluno[cont].mediaf);
		if(aluno[cont].mediaf<5){
			alunoR[y]=aluno[cont];
			y++;
		}else{
			alunoA[x]=aluno[cont];
			x++;
		}
		fflush(stdin);
		system("cls");
	}
	
	printf("======================== Alunos Aprovados ========================\n");
	for(cont=0;cont<x;cont++){
		printf("****************************************\n\nNome do aluno: %s\n\nMatricula do aluno: %d\n\nMédia final: %.2f\n\n",alunoA[cont].nome,alunoA[cont].matricula,alunoA[cont].mediaf);
	}
	
	printf("\n\n======================== Alunos Reprovados ========================\n");
	for(cont=0;cont<y;cont++){
		printf("****************************************\n\nNome do aluno: %s\n\nMatricula do aluno: %d\n\nMédia final: %.2f\n\n",alunoR[cont].nome,alunoR[cont].matricula,alunoR[cont].mediaf);
	}
}
