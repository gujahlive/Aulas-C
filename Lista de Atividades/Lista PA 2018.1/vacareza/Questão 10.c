#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*
10 - S�o conhecidas as notas de um determinado aluno em uma determinada disciplina
durante um semestre letivo: p1, p2, t1 e t2 com pesos respectivamente 3, 5, 1, e 1. S�o
conhecidos tamb�m o total de aulas desta disciplina e a quantidade de aulas que o aluno
assistiu. Elaborar um programa para calcular e exibir a m�dia do aluno e a sua frequ�ncia.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	float p1=3,p2=5,t1=1,t2=1,media;
	int faulas,aulas=100;
	
	printf("Informe o n�meros de aulas que voc� frequentou: ");
	scanf("%d", &faulas);
	media=(p1+p2+t1+t2)/4;
	system("cls");
	printf("A frequencia do aluno � de %d/100, e a m�dia das notas � %.2f",faulas,media);
}
