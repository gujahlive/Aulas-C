#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
17 - Escreva um algoritmo que leia o n�mero de identifica��o, as 3 notas obtidas por
um aluno nas 3 verifica��es e a m�dia dos exerc�cios que fazem parte da avalia��o, e
calcule a m�dia de aproveitamento, usando a f�rmula: MA := (nota1 + nota 2 * 2 +
nota 3 * 3 + ME)/7 A atribui��o dos conceitos obedece a tabela abaixo. O algoritmo
deve escrever o n�mero do aluno, suas notas, a m�dia dos exerc�cios, a m�dia de
aproveitamento, o conceito correspondente e a mensagem 'Aprovado' se o conceito
for A, B ou C, e 'Reprovado' se o conceito for D ou E.
M�dia de aproveitamento Conceito
>= 90 A
>= 75 e < 90 B
>= 60 e < 75 C
>= 40 e < 60 D
< 40 E
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int codigo;
	float n1,n2,n3,mediaa,media;
	
	printf("Informe seu c�digo de verifica��o: ");
	scanf("%d", &codigo);
	printf("Informe a primeira nota: ");
	scanf("%f", &n1);
	printf("\n\nInforme a segunda nota: ");
	scanf("%f", &n2);
	printf("\n\nInforme a terceira nota: ");
	scanf("%f", &n3);
	media=(n1+n2+n3)/3;
	mediaa=(n1+n2*2+n3*3+media)/7;
	system("cls");
	printf("Exibi��o dos dados do aluno: ");
	printf("\n\n\nC�digo do Aluno: %d\n\nPrimeira Nota: %.2f\n\nSegunda Nota: %.2f\n\nTerceira Nota: %.2f\n\nM�dia dos Exerc�cios: %.2f\n\nM�dia de Aproveitamento: %.2f",codigo,n1,n2,n3,media,mediaa);
	if(mediaa>=90){
		printf("\n\nConceito: A\n\nAluno Aprovado");
	}
	if(mediaa>=75 && mediaa<=89){
		printf("\n\nConceito: B\n\nAluno Aprovado");
	}
	if(mediaa>=60 && mediaa<=74){
		printf("\n\nConceito: C\n\nAluno Aprovado");
	}
	if(mediaa>=40 && mediaa<=59){
		printf("\n\nConceito: D\n\nAluno Reprovado");
	}
	if(mediaa<40){
		printf("\n\nConceito: E\n\nAluno Reprovado");
	}
	
}
