#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
21 - Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses
vetores. Obs: Produto escalar é a soma de todos os produtos.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int n,n1,cont,escalarx=0,escalary=0;
	
	printf("Informe o tamanho do vetor X: ");
	scanf("%d", &n);
	printf("\n\nInforme o tamanho do vetor Y: ");
	scanf("%d", &n1);
	int x[n], y[n1];
	for(cont=0;cont<n;cont++){
		x[cont]=cont;
	}
	for(cont=0;cont<n1;cont++){
		y[cont]=cont;
	}
	for(cont=0;cont<n;cont++){
		escalarx=x[cont]+escalarx;
	}
	for(cont=0;cont<n1;cont++){
		escalary=y[cont]+escalary;
	}
	printf("\n\n\nO produto escalar do vetor X é %d, e o do vetor Y é %d",escalarx,escalary);
}
