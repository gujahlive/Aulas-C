#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
56 � Fa�a uma fun��o recursiva que calcule e retorne o N-�simo termo da sequ�ncia
Fibonacci. Alguns n�meros desta sequ�ncia s�o: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/

int funcfibo(int,int,int,int,int);

main(){
    setlocale(LC_ALL, "Portuguese");
    
	int fb1=1,fb2=0,result=0,cont=1,num;


	printf("Informe o N-�simo n�mero da sequ�ncia de Fibonacci que voc� quer saber: ");
	scanf("%d", &num);
	
	result=funcfibo(fb1,fb2,result,cont,num);
	
	if(num==1){
		result=0;
	}
	printf("\nO %d� n�mero da sequ�ncia de Fibonacci � %d.", num, result);
}

funcfibo(FB1,FB2,RESULT,CONT,NUM){
	
	if(CONT==NUM){
		return RESULT;
	}
	RESULT=FB1+FB2;
	FB1=FB2;
	FB2=RESULT;
	CONT++;
	return funcfibo(FB1,FB2,RESULT,CONT,NUM);
	
}



