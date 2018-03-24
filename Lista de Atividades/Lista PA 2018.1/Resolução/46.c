/*46 – Faça um programa que leia os dados de 10 alunos (Nome, matricula, Media Final),
armazenando em um vetor. Uma vez lidos os dados, dívida estes dados em 2 novos
vetores, o vetor dos aprovados e o vetor dos reprovados, considerando a media
mínima para a aprovação como sendo 5.0. Exibir na tela os dados do vetor de
aprovados, seguido dos dados do vetor de reprovados.
*/
#include<stdio.h>
struct TipoAluno{
	char nome[21];
	int matricula;
	float mediaFinal;
};
/*struct TipoAlunoReprovado{
	char nome[21];
	int matricula;
	float mediaFinal;
};
struct TipoAlunoAprovado{
	char nome[21];
	int matricula;
	float mediaFinal;
};*/

main(){
	int i,contAp=0,contRp=0;
	struct TipoAluno aluno[4];// fazer um cont pra criar o vetor de aprovados e reprovados
	for(i=0;i<4;i++){
		printf("Matricula %d: ",i+1);
		scanf("%d",&aluno[i].matricula);
		printf("media final %d: ",i+1);
		scanf("%f",&aluno[i].mediaFinal);
		if(aluno[i].mediaFinal >= 5 ){
			contAp++;
		
		
		} else contRp++;
		printf("Nome %d: ",i+1);
		gets(aluno[i].nome); 
		fflush(stdin);
	}
	struct TipoAluno alunoRp[contRp];
	struct TipoAluno alunoAp[contAp];
	for(i=0; i<contRp ; i++){
		if ( aluno[i].mediaFinal < 5 ){
			alunoRp.mediaFinal = aluno[i].mediaFinal;
			alunoRp.nome = aluno[i].nome;
		}
		
		
	}
	for(i=0; i<contAp ; i++){
		if (aluno[i].mediaFinal >= 5 ){
			alunoAp.mediaFinal = aluno[i].mediaFinal;
			alunoAp.nome = aluno[i].nome;
		}
	}
	
	
}


