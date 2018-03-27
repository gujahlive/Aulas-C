#include<stdio.h>
#include<string.h>
#define MEDIA 5
typedef struct {
	char nome[20];
	float mediaFinal;
	int matricula;
}Talunos;
main(){
	Talunos aluno[3],*Paluno,AlunoRp[3],AlunoAp[3],*PAAP,*PARP;
	Paluno = aluno;
	PAAP = AlunoAp;
	PARP = AlunoRp;
	int i,contAp=0,contRp=0;
	for (i=0;i<3;i++){
		fflush(stdin);
		printf("Nome: ");
		gets(Paluno[i].nome);
		fflush(stdin);
		printf("Matricula: ");
		scanf("%d",&Paluno[i].matricula);
		printf("Media final: ");
		scanf("%f",&Paluno[i].mediaFinal);
		//fflush(stdin);
		if (Paluno[i].mediaFinal >= MEDIA){
			
			strcpy(PAAP[contAp].nome,Paluno[i].nome);
			PAAP[contAp].matricula = Paluno[i].matricula;
			PAAP[contAp].mediaFinal = Paluno[i].mediaFinal;
			printf("Aprovado! %f",PAAP[contAp].mediaFinal);
			contAp++;//tem que atribuir depois, pq ele ta começando do zero e aqui ele vira um;
	
		}else{
			
		//	AlunoRp[contRp] = aluno[i]; //pra copiar todos os indices
			
			fflush(stdin);
			strcpy(PARP[contRp].nome,Paluno[i].nome);
			fflush(stdin);
			PARP[contRp].matricula = Paluno[i].matricula;
			PARP[contRp].mediaFinal = Paluno[i].mediaFinal;
			fflush(stdin);
			printf("Reprovado! %f",PARP[contRp].mediaFinal);
			contRp++;//tem que atribuir depois, pq ele ta começando do zero e aqui ele vira um;
	}
		printf("\n");
		
	}
	printf("ContAP: %d\nContRP: %d\n",contAp,contRp);
	int j;
	printf("\tAlunos Aprovados: \n");
		for(j=0;j<contAp;j++){
		//	fflush(stdin);
			printf("Nome: %s\n",PAAP[j].nome);
			printf("Matricula: %d\n",PAAP[j].matricula);
			printf("Media Final: %.2f\n",PAAP[j].mediaFinal);
			printf("\n");
		//	fflush(stdin);
		}
	printf("\n");
	printf("\tAlunos Reprovados: \n");
		
		for(j=0;j<contRp;j++){
		//	fflush(stdin);
			printf("Nome: %s\n",PARP[j].nome);
			printf("Matricula: %d\n",PARP[j].matricula);
			printf("Media Final: %.2f\n",PARP[j].mediaFinal);
			printf("\n");
		//	fflush(stdin);
		
		}
			system("PAUSE");
	
}


