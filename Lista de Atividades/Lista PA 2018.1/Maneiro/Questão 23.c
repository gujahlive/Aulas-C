#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>
#include<time.h>

/*
23 - Sabe-se que um n�mero da forma n� � igual a soma de n �mpares consecutivos.
Exemplo: 1�= 1, 2�= 3+5, 3�= 7+9+11, 4�= 13+15+17+19,...
Dado m, determine os �mpares consecutivos cuja soma � igual a n3 para n assumindo
valores de 1 a m.
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	int n,k,n3,c=0;
	printf("Informe um n�mero ae man: ");
	scanf("%d",&n);
	n3=pow(n,3);
	k=n3/n-(n-1);
	while (c<n){
	printf("%d\t",k);	
	k+=2;
	c++;
	}
}
