#include<stdio.h>
int fat(int x){
	int result;
	if(x==1){
		result = 1;
	}else result =  x * fat(x-1);
	return result;
}

main(){
	int y,r;
	printf("Digite: ");
	scanf("%d",&y);
	r = fat(y);
	printf("%d",r);
}
