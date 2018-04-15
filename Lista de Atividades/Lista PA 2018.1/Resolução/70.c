/*70 - Faça um programa que leia dois números N e M:
? Crie e leia uma matriz N x M de inteiros;
? Crie e construa uma matriz transposta M x N de inteiros.
Alocação Dinâmica 
? Mostre as duas matrizes. */
#include<stdio.h>
#include<stdlib.h>
main(){
	int i,n,m,*pn,*pm;
	printf("Insira N: ");
	scanf("%d",&n);
	printf("Insira M: ");
	scanf("%d",&m);	
	pn = (int *) malloc (n * sizeof(int));
	pm = (int *) malloc (m * sizeof(int));
	for(i=0;i<n;i++){
			printf("N[%d] Representando LINHA: ",i);
			scanf("%d",&pn[i]);	
	}
	for(i=0;i<m;i++){
			printf("M[%d] Representando COLUNA: ",i);
			scanf("%d",&pm[i]);	
	}

	for (i=0;i<n;i++){
		printf("%d n \n",pn[i]);
		for(i=0;i<m;i++){
			printf("%d  m \t",pm[i]);	
		}
		
	}
	
}
