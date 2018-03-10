#include<stdio.h>
main(){
	int x[4],i;
	x[0] = 5;
	i = 3 ;
	x[i] = 20;
	x[i - 1] = 15;
	i-=2;
	x[i]=10;
	printf("%d %d %d %d",x[0],x[1],x[2],x[3]);
}
