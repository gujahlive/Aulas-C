#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
29 - Escreva um programa que receba como entrada o valor do saque realizado pelo
cliente de um banco e retorne quantas notas de cada valor serão necessárias para
atender ao saque com a menor quantidade de notas possível. Serão utilizadas notas de
100, 50, 20, 10, 5, 2 e 1 real.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valor,saque=0,qn100=0,qn50=0,qn20=0,qn10=0,qn5=0,qn2=0,qn1=0,tn=0;
	
	printf("Informe a quantia que deseja retirar: ");
	scanf("%d", &valor);
	while(saque+100<=valor){
		saque=saque+100;
		qn100++;
		tn++;
	}
	while(saque+50<=valor){
		saque=saque+50;
		qn50++;
		tn++;
	}
	while(saque+20<=valor){
		saque=saque+20;
		qn20++;
		tn++;
	}
	while(saque+10<=valor){
		saque=saque+10;
		qn10++;
		tn++;
	}
	while(saque+5<=valor){
		saque=saque+5;
		qn5++;
		tn++;
	}
	while(saque+2<=valor){
		saque=saque+2;
		qn2++;
		tn++;
	}
	while(saque+1<=valor){
		saque=saque+1;
		qn1++;
		tn++;
	}
	system("cls");
	printf("O retorno será de %d notas\n\nNotas de 100: %d\n\nNotas de 50: %d\n\nNotas de 20: %d\n\nNotas de 10: %d\n\nNotas de 5: %d\n\nNotas de 2: %d\n\nNotas de 1: %d",tn,qn100,qn50,qn20,qn10,qn5,qn2,qn1);
}
