#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
30 - Escreva um programa que leia um inteiro n�o negativo N e imprima a soma dos N
primeiros n�meros primos.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,cont,cont2,soma=0,x,v,q;
	
	printf("Informe um n�mero positivo: ");
	scanf("%d", &n);
	while(n<=0){
		printf("N�mero inv�lido, informe um n�mero positivo: ");
		scanf("%d", &n);
	}
	printf("\nInforme quantos primeiros n�meros primos voc� quer somar: ");
	scanf("%d", &v);
	for(cont=1;cont<n;cont++){
		x=0;
		if(q<v){
			for(cont2=1;cont2<=cont;cont2++){
				if(cont%cont2==0){
					x++;
				}
			}
			if(x==2){
				soma=soma+cont;
				q++;
			}
			
		}
	}
	printf("\nA soma dos %d primeiros n�meros primos � %d",v,soma);
}
