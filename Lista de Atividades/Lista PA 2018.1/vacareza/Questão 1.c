#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
1 - Leia uma temperatura em graus Celsius e apresente-a convertida em graus Fahrenheit. A
formula de conversao e: F = C.(9.0/5.0)+32.0, sendo F a temperatura em Fahrenheit e C a
temperatura em Celsius.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	float f,c=0;
	
	printf("Informe a temperatura em °C(graus Celsius) para ser transformada em °F(graus Fahrenheit): ");
	scanf("%f", &c);
	f=c*(9.0/5.0)+32.0;
	printf("\n%.3f°C graus Celsius e igual a %.3f graus Fahrenheit",c,f);
	
}
