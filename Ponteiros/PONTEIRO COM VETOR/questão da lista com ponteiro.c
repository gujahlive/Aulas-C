#include<stdio.h>
#include<string.h>
#define MEDIA 5


typedef struct {
	char nome[20];
	float mediaFinal;
	int matricula;
}Talunos;
main(){
	Talunos aluno[3],AlunoRp[3],AlunoAp[3];
	int i,contAp=0,contRp=0;
	for (i=0;i<3;i++){
		fflush(stdin);
		printf("Nome: ");
		gets(aluno[i].nome);
		fflush(stdin);
		printf("Matricula: ");
		scanf("%d",&aluno[i].matricula);
		printf("Media final: ");
		scanf("%f",&aluno[i].mediaFinal);
		//fflush(stdin);
		if (aluno[i].mediaFinal >= 5){
			contAp++;
			strcpy(AlunoAp[contAp].nome,aluno[i].nome);
			AlunoAp[contAp].matricula = aluno[i].matricula;
			AlunoAp[contAp].mediaFinal = aluno[i].mediaFinal;
			printf("Aprovado! %f",AlunoAp[contAp].mediaFinal);
	
		}else{
			contRp++;
			AlunoRp[contRp] = aluno[i];
			printf("Reprovado! %f",AlunoRp[contRp].mediaFinal);
		/*	fflush(stdin);
			strcpy(AlunoRp[contRp].nome,aluno[i].nome);
		//	fflush(stdin);
			AlunoRp[contRp].matricula = aluno[i].matricula;
			AlunoRp[contRp].mediaFinal = aluno[i].mediaFinal;
			fflush(stdin);*/
	}
		printf("\n");
		
	}
	printf("%d\n%d",contAp,contRp);
	
	printf("\tAlunos Aprovados: \n");
		for(i=0;i<contAp;i++){
		//	fflush(stdin);
			printf("Nome: %s\n",AlunoAp[i].nome);
			printf("Matricula: %d\n",AlunoAp[i].matricula);
			printf("Media Final: %.2f\n",AlunoAp[i].mediaFinal);
			printf("\n");
		//	fflush(stdin);
		}
		printf("\n");
	printf("\tAlunos Reprovados: \n");
		
		for(i=0;i<contRp;i++){
		//	fflush(stdin);
			printf("Nome: %s\n",AlunoRp[i].nome);
			printf("Matricula: %d\n",AlunoRp[i].matricula);
			printf("Media Final: %.2f\n",AlunoRp[i].mediaFinal);
			printf("\n");
		//	fflush(stdin);
		
		}
			system("PAUSE");
	
}
