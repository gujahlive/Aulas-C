#include<stdio.h>//biblioteca input e output, entrada e saida
#include<string.h>//biblioteca de string, para usar o strcpy e outros
#include<stdlib.h>//executa funções do system(""); mas ta pegando sem
#include<locale.h>//importa a biblioteca de linguas
#include<math.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int valorLata = 20 , ltLata = 5;
	float pi=3,14, alturaH, baseR,AL,somaHR; // calculo area lateral
	float  R,AB; // calculo area do circulo do raio 
	float alturaH, baseR,AR; // calculo soma da área lateral com as areas das bases
	printf("informe a altura");
	scanf("%f",&alturaH);
	printf("informe a Raio da base");
	scanf("%f",&baseR);
	AL = 2*pi*r*h; // calculo area lateral
	
	printf("Informe o Raio: ");
	scanf("%f",&R);
	AB = pi*pow(r,2); // calculo area do circulo do raio 
	
	//somaHR = alturaH + baseR;
	
	AR = AL + 2*AB = 2 * pi * baseR * alturaH + 2*pi*pow(r,2) = 2 * pi * baseR * (alturaH + baseR);
	
	
	printf("%");
	
	
	
	

	
	
	
	//system("mkdir teste"); cria pasta
	system("pause");//pausa o sistema e pausa o executável
	//system("cls");// limpa a tela
	
}
