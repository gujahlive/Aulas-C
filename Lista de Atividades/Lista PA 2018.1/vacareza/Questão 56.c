#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
56 – Faça uma função recursiva que calcule e retorne o N-ésimo termo da sequência
Fibonacci. Alguns números desta sequência são: 0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
*/

int funcfibo(int,int,int,int,int);

main(){
    setlocale(LC_ALL, "Portuguese");
    
	int fb1=1,fb2=0,result=0,cont=1,num;


	printf("Informe o N-ésimo número da sequência de Fibonacci que você quer saber: ");
	scanf("%d", &num);
	
	result=funcfibo(fb1,fb2,result,cont,num);
	
	if(num==1){
		result=0;
	}
	printf("\nO %d° número da sequência de Fibonacci é %d.", num, result);
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



