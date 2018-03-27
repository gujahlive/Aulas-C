/*46 – Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media Final),
armazenando em um vetor. Uma vez lidos os dados, dívida estes dados em 2 novos
vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a media
mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de
aprovados, seguido dos dados do vetor de reprovados.
*/
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
		if (aluno[i].mediaFinal >= MEDIA){
			
			strcpy(AlunoAp[contAp].nome,aluno[i].nome);
			AlunoAp[contAp].matricula = aluno[i].matricula;
			AlunoAp[contAp].mediaFinal = aluno[i].mediaFinal;
			printf("Aprovado! %f",AlunoAp[contAp].mediaFinal);
			contAp++;//tem que atribuir depois, pq ele ta começando do zero e aqui ele vira um;
	
		}else{
			
			AlunoRp[contRp] = aluno[i];
			printf("Reprovado! %f",AlunoRp[contRp].mediaFinal);
			fflush(stdin);
			strcpy(AlunoRp[contRp].nome,aluno[i].nome);
			fflush(stdin);
			AlunoRp[contRp].matricula = aluno[i].matricula;
			AlunoRp[contRp].mediaFinal = aluno[i].mediaFinal;
			fflush(stdin);
			contRp++;//tem que atribuir depois, pq ele ta começando do zero e aqui ele vira um;
	}
		printf("\n");
		
	}
	printf("ContAP: %d\nContRP: %d\n",contAp,contRp);
	int j;
	printf("\tAlunos Aprovados: \n");
		for(j=0;j<contAp;j++){
		//	fflush(stdin);
			printf("Nome: %s\n",AlunoAp[j].nome);
			printf("Matricula: %d\n",AlunoAp[j].matricula);
			printf("Media Final: %.2f\n",AlunoAp[j].mediaFinal);
			printf("\n");
		//	fflush(stdin);
		}
		printf("\n");
	printf("\tAlunos Reprovados: \n");
		
		for(j=0;j<contRp;j++){
		//	fflush(stdin);
			printf("Nome: %s\n",AlunoRp[j].nome);
			printf("Matricula: %d\n",AlunoRp[j].matricula);
			printf("Media Final: %.2f\n",AlunoRp[j].mediaFinal);
			printf("\n");
		//	fflush(stdin);
		
		}
			system("PAUSE");
	
}


