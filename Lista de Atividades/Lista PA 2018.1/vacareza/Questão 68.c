#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
68 - Fa�a um programa que leia uma quantidade qualquer de n�meros armazenandoos
na mem�ria e pare a leitura quando o usu�rio entrar um n�mero negativo. Em
seguida, � imprima o vetor lido. Use a fun��o REALLOC.
*/

int *pv;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x=0,y=1,cont;
	
	pv=(int*)malloc(sizeof(int));
	
	do{
		printf("Informe um n�mero: ");
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
