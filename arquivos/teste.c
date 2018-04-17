#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	typedef struct {
		char nome[50];
		int idade;
	}Aluno;
	
	FILE * arq;
	Aluno a1;
	int i;
	arq = fopen("alunos.txt","ab");
	printf("Nome: ");
	gets(a1.nome);
	printf("Idade: ");
	scanf("%d",&a1.idade);
	fwrite(&a1, sizeof(Aluno), 1, arq);
	fclose(arq);
	arq = fopen("alunos.txt","rb");
	while(fread(&a1, sizeof(Aluno), 1, arq)!= 0){
		printf("Nome: %s, Idade: %d\n", a1.nome, a1.idade);
		
	}
	fclose(arq);
	

	
}
