#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
6 - Fa�a um programa que calcule e mostre a �rea de um trap�zio. Sabe-se que:
A = .................... .. .................... * ..............
Lembre-se a base maior e a base menor devem ser n�meros maiores que zero.
*/



main(){
	setlocale(LC_ALL, "Portuguese");
	float bmaior,bmenor,altura,areat;
	
	printf("Informe a medida da base maior do trap�zio: ");
	scanf("%f",&bmaior);
	printf("\nInforme a medida da base menor do trap�zio: ");
	scanf("%f",&bmenor);
	printf("\nInforme a medida da altura do trap�zio: ");
	scanf("%f",&altura);
	areat=(bmaior+bmenor)*altura/2;
	printf("\nA area total do trap�zio � %.1f.",areat);
	
	
}
