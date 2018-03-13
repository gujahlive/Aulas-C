#include<stdio.h>
int potencia(int B, int E){
	int R;
	if(E==1){
		R = B;
	} else if (E == 0){
		 R = 1;
	}else B = B * potencia(B,E - 1);
	R = B;
	return R;
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
