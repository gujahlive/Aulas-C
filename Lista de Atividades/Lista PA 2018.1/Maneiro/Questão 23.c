#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<time.h>

/*
23 - Sabe-se que um número da forma n³ é igual a soma de n ímpares consecutivos.
Exemplo: 1³= 1, 2³= 3+5, 3³= 7+9+11, 4³= 13+15+17+19,...
Dado m, determine os ímpares consecutivos cuja soma é igual a n3 para n assumindo
valores de 1 a m.
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	int n,k,n3,c=0;
	printf("Informe um número ae man: ");
	scanf("%d",&n);
	n3=pow(n,3);
	k=n3/n-(n-1);
	while (c<n){
	printf("%d\t",k);	
	k+=2;
	c++;
	}
}
