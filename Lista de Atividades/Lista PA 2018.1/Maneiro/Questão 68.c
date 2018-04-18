#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
68 - Faça um programa que leia uma quantidade qualquer de números armazenandoos
na memória e pare a leitura quando o usuário entrar um número negativo. Em
seguida, ´ imprima o vetor lido. Use a função REALLOC.
*/

int *pv;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x=0,y=1,cont;
	
	pv=(int*)malloc(sizeof(int));
	
	do{
		printf("Informe um número: ");
		scanf("%d", &pv[x]);
		if(pv[x]>=0){
			x++;
			y++;
			pv = realloc(pv,y*sizeof(int));
		}
		system("cls");
	}while(pv[x]>=0);
	
	for(cont=0;cont<=x;cont++){
		printf("%d\t",pv[cont]);
	}
	free(pv);
	pv=NULL;
}
