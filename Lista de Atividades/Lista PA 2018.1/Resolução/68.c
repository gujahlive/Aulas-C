/*68 - Faça um programa que leia uma quantidade qualquer de números armazenandoos
na memória e pare a leitura quando o usuário entrar um número negativo. Em
seguida, ´ imprima o vetor lido. Use a função REALLOC. 
*/
#include<stdio.h>
#include<stdlib.h>
main(){
	int i,n, *pn,cont=0;
	pn = (int *)malloc(sizeof(int));
	do {
		printf("Insira: ");
		scanf("%d",pn[i]);
		cont++;
		pn = (int *)realloc(pn, 2 * sizeof(int));
		printf("Digite -1 para parar: ");
		scanf("%d",&n);
		
	}while(n!=-1);
	for(i=0;i<cont;i++){
		printf("%d\n",pn[i]);
	}
	
	
}
