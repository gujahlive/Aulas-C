#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>

/*
28 � Fa�a um programa que some os termos de valor par da sequ�ncia de Fibonacci,
cujos valores n�o ultrapassem 4000.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int fb1=1,fb2=0,result=0,cont,soma,resultf=0;


	for(soma=1;soma<=4000;cont++){
		result=fb1+fb2;
		printf("%d\t",soma);
		fb1=fb2;
		fb2=result;
		soma=result+soma;
		if(soma<4000 && soma%2==0){
			resultf=soma+resultf;
		}
	}
	printf("\n\n\n%d",resultf);
}
