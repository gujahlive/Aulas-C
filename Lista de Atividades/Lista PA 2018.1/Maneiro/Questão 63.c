#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
63 - Fa�a um programa que leia tr�s valores inteiros e chame uma fun��o que receba
estes 3 valores de entrada e retorne eles ordenados, ou seja, o menor valor na
primeira vari�vel, o segundo menor valor na vari�vel do meio, e o maior valor na
�ltima vari�vel. A fun��o deve retornar o valor 1 se os tr�s valores forem iguais e 0 se
existirem valores diferentes. Exibir os valores ordenados na tela.
*/

int *pmai, *pmed, *pmen;

int menor(int, int, int);


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int a, b ,c;
	
	printf("Informe um valor para A: ");
	scanf("%d", &a);
	printf("Informe um valor para B: ");
	scanf("%d", &b);
	printf("Informe um valor para C: ");
	scanf("%d", &c);
	
	menor(a, b, c);
	
	//system("cls"); <<Dando problema nos ponteiros !!!
	
	printf("Os valores em ordem crescente s�o: %d - %d - %d", *pmen, *pmed, *pmai);
	
}


menor(A, B, C){
	
	int maior,medio,menor,T;
	
	maior=A;
	medio=B;
	menor=C;
	
	if(medio<menor){
		T=medio;
		medio=menor;
		menor=T;
	}
	if(maior<medio){
		T=maior;
		maior=medio;
		medio=T;
	}
	if(medio<menor){
		T=medio;
		medio=menor;
		menor=T;
	}
	
	pmai = &maior;
	pmed = &medio;
	pmen = &menor;
	
	if(maior==medio && medio==menor){
		return 1;
	}else{
		return 0;
	}
	
	
	
}




