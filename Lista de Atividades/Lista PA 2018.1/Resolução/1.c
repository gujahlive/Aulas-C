#include<stdio.h>
main(){
	float c,f=0,convert=0,divisao=0,soma=0,mult=0;
	// formula: f= c*(9.0/5.0)+32.0 //
	printf("Graus celsius: ");
	scanf("%f",&c);
	divisao = 9.0/5.0;
	mult = divisao * c;
	f = mult + 32;
	printf("Graus Celsius %.1f - - Fahrenheit: %.2f",c,f);
	
}
