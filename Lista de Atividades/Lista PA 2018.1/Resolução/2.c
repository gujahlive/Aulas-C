#include<stdio.h>
main(){
	float seg, h,m,km,K,M;
	
	printf("Digite os metros: ");
	scanf("%f",&m);
	printf("Digite os segundos: ");
	scanf("%f",&seg);
	M = m / seg;
	K = M * 3.6;
	printf("KM/H: %.2f",K);
	
}
