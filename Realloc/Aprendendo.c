#include<stdio.h>
#include<stdlib.h>
main(){
	int *pvet,i;
	pvet = (int *) malloc (5 * sizeof(int));
	for(i=0 ; i<5; i++){
		scanf("%d", &pvet[i]);
	}	
	printf("%p\n",pvet);
	pvet = realloc(pvet, 10*sizeof(int));// realoca como o vetor de 10 posições, tipo acrescenta mais cinco, isso tem que ser tratado com adção e parametro quando for passado pelo usuário
	for(i= 5 ; i <10 ;i++){// o i começa do valor que parou antes
		scanf("%d", pvet+i);// aritimetica de ponteiros
	}
	printf("%p\n\n",pvet);	
	for(i= 0 ; i <10 ;i++){// do zero pra imprimir tudo!
		printf("%d ", pvet[i]);// exibição com aritimetica de ponteiros == printf("%d",*(pvet+i));
	}
}



