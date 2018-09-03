#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
3 - Leia um angulo em graus e apresente-o convertido em radianos. A formula de conversao e:
R = G . ¥ð/180, sendo G o angulo em graus e R em radianos e ¥ð = 3.14.
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	float r,g;
	
	printf("Informe um ângulo em graus para converter em radianos: ");
	scanf("%f", &g);
	r=g*3.14/180;
	printf("\n%.2f em graus é igual a %.2f em radianos.",g,r);
	
}
