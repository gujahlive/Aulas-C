#include<stdio.h>
main(){
	int vetor[2],*v;
	v = vetor;
	v[0] = 123;
	v[1] = 456;

	printf("vetor[0] =  %d\nvetor[1] = %d\n",vetor[0],vetor[1] );
}
