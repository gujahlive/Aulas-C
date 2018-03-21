#include<stdio.h>
int inverte(int n){
	 int NUM1, NUM2, NUM3,result;
	 if(n>10){
		NUM1=n%10;
	  	n=n/10;
	 	 NUM2=n%10;
	  	n=n/10;
	  	NUM3=n%10;
	}   
	return result = NUM1+NUM2+NUM3;

}
main(){
	int NUM,r;
	printf("Digite de 3 digitos: ");
  	scanf("%d", &NUM);
  	r = inverte(NUM);
  	
	printf("%d\n\n",r);
  	system("PAUSE");
	
}
