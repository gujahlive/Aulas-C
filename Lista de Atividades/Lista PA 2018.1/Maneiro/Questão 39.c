#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
39 – Escreva um algoritmo em C que receba uma String e depois outra String e
verifique se a segunda string está contida na primeira.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome1[51],nome2[51];
	int d=0;
	
	printf("Informe um nome: ");
	fgets(nome1,50,stdin);
	fflush(stdin);
	printf("\n\nInforme mais um nome: ");
	fgets(nome2,50,stdin);
	fflush(stdin);
	d=strcmp(nome1,nome2);
	if(d==0){
		printf("\n\n\n1° Nome: %s\n\n2° Nome: %s\n\nNomes iguais", nome1, nome2);
	}else{
		printf("\n\n\n1° Nome: %s\n\n2° Nome: %s\n\nNomes diferentes", nome1, nome2);
	}
}
