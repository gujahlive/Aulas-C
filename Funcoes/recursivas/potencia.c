#include<stdio.h>
int potencia(int B, int E){
	int R;
	if(E==1){
		return B;
	} else if (E == 0){
		 return 1;
	}else return B * potencia(B,E - 1);
}
main(){
	int b,e,r;
	printf("Digite a base: ");
	scanf("%d",&b);
	printf("Digite o expo: ");
	scanf("%d",&e);
	r = potencia(b,e);
	printf("R: %d",r);
}
