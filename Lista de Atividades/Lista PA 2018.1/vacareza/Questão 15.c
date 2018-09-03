#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
15 - Encontrar o dobro de um número caso ele seja positivo e o seu triplo caso seja
negativo, imprimindo o resultado.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	float num,result;
	
	printf("Informe um número positivo para saber o dobro do mesmo ou \num número negativo para saber o triplo do mesmo: ");
	scanf("%f", &num);
	if(num>=0){
		result=num*2;
		printf("\n\nO dobro de %.1f é: %.1f", num, result);
	}else{
		result=num*3;
		printf("\n\nO triplo de %.1f é: %.1f", num, result);
	}
}
