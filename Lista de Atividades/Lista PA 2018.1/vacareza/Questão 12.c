#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
12 - O custo ao consumidor de um carro novo e a soma do custo de f�brica, da comiss�o do
distribuidor, e dos impostos. A comiss�o e os impostos s s�o calculados sobre o custo de
fabrica, de acordo com a tabela abaixo. Leia o custo de f�brica e escreva o custo ao
consumidor.

CUSTO DE F�BRICA                     % DO DISTRIBUIDOR       % DOS IMPOSTOS
At� R$ 12.000,00                             5                    Isento
Entre R$ 12.000,00 e 25.000,00               10                     15
Acima de R$ 25.000,00                        15                     20
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	float custoc=0,custof=0;
	int x=0,y=0;
	
	printf("Informe o custo de fabrica��o do carro: ");
	scanf("%f", &custof);
	if(custof<=12000){
		x=custof/100;
		x=x*5;
		custoc=x+custof;
		printf("\n\nO custo ao consumidor ser� de R$ %.2f reais.",custoc);
	}
	if(custof>12000 && custof<=25000){
		x=custof/100;
		y=x;
		x=x*10;
		y=y*15;
		custoc=custof+x+y;
		printf("\n\nO custo ao consumidor ser� de R$ %.2f reais.",custoc);
	}
	if(custof>25000){
		x=custof/100;
		y=x;
		x=x*15;
		y=y*20;
		custoc=custof+x+y;
		printf("\n\nO custo ao consumidor ser� de R$ %.2f reais.",custoc);
	}
}
