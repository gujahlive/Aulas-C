/*61 - Fa�a um programa que leia 2 valores inteiros e chame uma fun��o que receba
estas 2 vari�veis e troque o seu conte�do, ou seja, esta fun��o e chamada passando
duas vari�veis A e B por exemplo e, ap�s a execu��o da fun��o, A conter� o valor de B
e B ter� o valor de A. 
*/



#include<stdio.h>
void trocaValor(int *pa, int *pb){
	int aux;
	aux = *pa;
	*pa = *pb;
	*pb = aux;
}
main(){
	int a=10,b=20;
	printf("Antes: %d %d\n",a,b);
	trocaValor(&a,&b);
	printf("depois: %d %d",a,b);
}
