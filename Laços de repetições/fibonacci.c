#include<stdio.h>
main(){
	int n,a=1,b=1,c=0,d=0;
	printf("Informe: ");
	scanf("%d",&n);
	printf("%d %d ",a,b);
	while(c<n){
		c = a+b;
		printf("%d ",c);
		a = b;
		b = c;
	}
}
