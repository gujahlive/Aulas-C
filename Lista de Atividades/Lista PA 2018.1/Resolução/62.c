/*62 - Crie um programa que contenha um array de inteiros contendo 5 elementos.
Utilizando apenas aritmética de ponteiros, leia esse array do teclado e imprima o
dobro de cada valor lido.*/

#include<stdio.h>
main(){
	int i,vetor[3],dobro[3],*pv, *pdobro,cont,j;
	
	pv = vetor;
	pdobro = dobro;
	
	for (i=0;i<3;i++){
		printf("Povoe: ");
		scanf("%d",&vetor[i]);
		
		*pdobro = *pv * 2;

	}
/*	pv = &vetor;
	pdobro = &dobro;
	
	for(i=0;i<3;i++){
		*pdobro = *pv * 2; 				
	}*/
	
	for(i=0; i<3;i++){
		printf("O dobro de %d eh: %d\n",vetor[i],dobro[i]);
	} 
	
}
