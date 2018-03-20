#include<stdio.h>
main(){
	int i,a=1,b=0,c=0,d=0,qtTermos;
	printf("Informe a quantidade de termos pro fibonacci: ");
	scanf("%d",&qtTermos);
	
	for(i=0;i<qtTermos;i++){
		c = a+b;
		printf("%d ",c);
		a = b;
		b = c;
	
	
	}
		
	
	
}
