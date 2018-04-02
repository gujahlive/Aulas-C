#include<stdio.h>
main(){
int x = 10,*px ,**ppx;

	px = &x;
	ppx = &px;
	printf("%d %d %d \n",x,px,ppx);
	printf("Endereco de x :%d\nPonteiro px: %d \n**ppx :%d \n",&x,px,&px,ppx);
	printf("Endereco de px :%d \nppx: %d \n**ppx :%d \n",&px,ppx);
	printf("*ppx: %d\n**ppx: %d\n",*ppx,**ppx);
		
}
