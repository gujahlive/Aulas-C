#include<stdio.h>
typedef struct {
	int matricula;
}Taluno;

main(){
	Taluno aluno;
	typedef	int inteiro;
	inteiro i=10;
	printf("%d\n",i);
	aluno.matricula = i;
	printf("%d",aluno.matricula);

}
