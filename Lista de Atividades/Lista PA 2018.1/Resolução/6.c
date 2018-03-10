#include<stdio.h>
main(){
	float BM,bm,alt,total,sum,result;
	printf("Digite a base maior: ");
	scanf("%f",&BM);
	printf("Digite a base menor: ");
	scanf("%f",&bm);
	printf("Digite a altura: ");
	scanf("%f",&alt);
	sum = BM + bm;
	total = sum * alt;
	result = total / 2;
	printf("Area do trapezio é: %f",result);
}


