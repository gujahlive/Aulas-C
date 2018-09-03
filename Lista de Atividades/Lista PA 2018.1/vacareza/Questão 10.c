#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*
10 - São conhecidas as notas de um determinado aluno em uma determinada disciplina
durante um semestre letivo: p1, p2, t1 e t2 com pesos respectivamente 3, 5, 1, e 1. São
conhecidos também o total de aulas desta disciplina e a quantidade de aulas que o aluno
assistiu. Elaborar um programa para calcular e exibir a média do aluno e a sua frequência.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	float p1=3,p2=5,t1=1,t2=1,media;
	int faulas,aulas=100;
	
	printf("Informe o números de aulas que você frequentou: ");
	scanf("%d", &faulas);
	media=(p1+p2+t1+t2)/4;
	system("cls");
	printf("A frequencia do aluno é de %d/100, e a média das notas é %.2f",faulas,media);
}
