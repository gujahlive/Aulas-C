#include<stdio.h>
struct TipoAluno{
	char nome[21],matricula[31];
	float nt1,nt2;
	
}Aluno;
main(){
	printf("Nome: ");
	gets(Aluno.nome);
	printf("Matricula: ");
	gets(Aluno.matricula);
	fflush(stdin);
	printf("Nota 1ª prova: ");
	scanf("%f",&Aluno.nt1);
	printf("Nota 2ª prova: ");
	scanf("%f",&Aluno.nt2);
	
	printf("\n\n\n\n\n==============================\n");
	printf("Nome: %s\nMatricula: %s\nNota 1: %.2f\nNota 2: %.2f\n",Aluno.nome,Aluno.matricula,Aluno.nt1,Aluno.nt2);
	printf("==============================\n");
}
