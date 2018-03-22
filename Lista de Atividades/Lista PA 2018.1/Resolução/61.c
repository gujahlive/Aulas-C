/*61 - Faça um programa que leia 2 valores inteiros e chame uma função que receba
estas 2 variáveis e troque o seu conteúdo, ou seja, esta função e chamada passando
duas variáveis A e B por exemplo e, após a execução da função, A conterá o valor de B
e B terá o valor de A. 
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
