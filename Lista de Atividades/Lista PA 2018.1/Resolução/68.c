/*68 - Fa�a um programa que leia uma quantidade qualquer de n�meros armazenandoos
na mem�ria e pare a leitura quando o usu�rio entrar um n�mero negativo. Em
seguida, � imprima o vetor lido. Use a fun��o REALLOC. 
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
