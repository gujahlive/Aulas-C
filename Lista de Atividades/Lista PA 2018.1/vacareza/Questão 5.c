#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
5 - Fa�a um programa que leia um numero inteiro positivo de tr�s d�gitos(de 100 a 999). Gere
outro numero formado pelos d�gitos invertidos do numero lido. Exemplo:

                                   N�meroLido = 123
                                   NumeroGerado = 321.

*/



main(){
	setlocale(LC_ALL, "Portuguese");
	int num,c1,c2,c3;
	
	printf("Informe um n�mero inteiro positivo de 3 digitos: ");
	scanf("%d", &num);
	if(num>10){
	c1=num%10;
	num=num/10;
	c2=num%10;
	num=num/10;
	c3=num%10;
	num=num/10;
	}
	printf("\n\nO n�mero invertido �: %d%d%d",c1,c2,c3);
}
