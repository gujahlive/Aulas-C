#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
9 - Calcular e imprimir o volume e a área de superfície de um cone reto, um cilindro ou uma
esfera. O programa deverá ler a opção da figura desejada.

				Cone reto V = pi*r*r*(H/3) e A = pi*r*sgrt(r*r+H*H);
				Cilindro V = pi*r*r*H e A = 2pi*r*H
				Esfera V = 4/(3*pi*r*r*r) e A = 4*pi*r*r
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int op;
	float h,r,volume,area;
	
	
	printf("Informe o número correspondente ao calculo desejado");
	printf("\n\n[1]Cone reto:\n\n[2]Cilindro:\n\n[3]Esfera: ");
	scanf("%d",&op);
	system("cls");
	switch(op){
		case 1:
			printf("Informe a altura do cone: ");
			scanf("%f",&h);
			printf("\nInforme o raio do cone: ");
			scanf("%f",&r);
			volume=3.14*r*r*(h/3);
			area=3.14*r*sqrt(r*r*h*h);
			printf("\n\nO volume do cone reto é %.2f , e a área é %.2f",volume,area);
			break;
		case 2:
			printf("Informe a altura do cilindro: ");
			scanf("%f",&h);
			printf("\nInforme o raio do cilindro: ");
			scanf("%f",&r);
			volume=3.14*r*r*h;
			area=2*3.14*r*h;
			printf("\n\nO volume do cilindro é %.2f , e a área é %.2f",volume,area);
			break;
		case 3:
			printf("Informe o raio da esfera: ");
			scanf("%f",&r);
			volume=4/(3*3.14*r*r*r);
			area=4*3.14*r*r;
			printf("\n\nO volume da esfera é %.2f , e a área é %.2f",volume,area);
			break;
		default:
			printf("Opção invalida!!!");
			break;
	}
}
