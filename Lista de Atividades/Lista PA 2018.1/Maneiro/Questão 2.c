#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
2 - Leia uma velocidade em m/s (metros por segundo) e apresente-a convertida em km/h
(quilometros por hora). A formula de conversao e: K = M . 3.6, sendo K a velocidade em km/h
e M em m/s.
*/



main(){
	setlocale(LC_ALL, "Portuguese");
	float m=0,k;
	
	printf("Informe uma velocidade em M/s(metros por segundo) para converter para Km/h(quilometros por hora):");
	scanf("%f", &m);
	k=m*3.6;
	printf("\n%.1f metros por segundo é igual a %.1f quilometros por hora.",m,k);
}
