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
