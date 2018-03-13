#include<stdio.h>
int soma(int x){
	int result;
	if(x==1){
		return 1;
	}else return x + soma(x-1);
	return result;
}

main(){
	int y,r;
	printf("Digite: ");
	scanf("%d",&y);
	r = soma(y);
	printf("%d",r);
}
