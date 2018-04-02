#include<stdio.h>
#include<stdlib.h>
main(){
	int *a, *b, *c;
	a = (int *) malloc (sizeof(int));// sempre aloca pra depois pedir o valor
	b = (int *) malloc (sizeof(int));
	c = (int *) malloc (sizeof(int));
	scanf("%d%d",a,b);
	*c = *a + *b;
	printf("%d + %d : %d",*a,*b,*c);



}

