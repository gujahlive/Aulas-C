#include<stdio.h>
#include<stdlib.h>

main(){
	int x,*px;
	x=10;
	px= &x;
	
	px = (int *) malloc (sizeof(int));
	printf("%d\n",px);
	//px = (int *) realloc (2 * sizeof(int));
	free(px); 
	printf("%d",px);

}

