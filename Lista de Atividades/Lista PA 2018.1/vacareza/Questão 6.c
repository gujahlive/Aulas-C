#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
6 - Faça um programa que calcule e mostre a área de um trapézio. Sabe-se que:
A = .................... .. .................... * ..............
Lembre-se a base maior e a base menor devem ser números maiores que zero.
*/



main(){
	setlocale(LC_ALL, "Portuguese");
	float bmaior,bmenor,altura,areat;
	
	printf("Informe a medida da base maior do trapézio: ");
	scanf("%f",&bmaior);
	printf("\nInforme a medida da base menor do trapézio: ");
	scanf("%f",&bmenor);
	printf("\nInforme a medida da altura do trapézio: ");
	scanf("%f",&altura);
	areat=(bmaior+bmenor)*altura/2;
	printf("\nA area total do trapézio é %.1f.",areat);
	
	
}
