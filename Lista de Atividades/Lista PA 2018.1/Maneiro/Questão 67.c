#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
67 - Fa�a um programa que simule a mem�ria de um computador: o usu�rio ir a
especificar o tamanho da mem�ria, ou seja, quantos bytes ser�o alocados do tipo
inteiro. Para tanto, a mem�ria solicitada deve ser um valor m�ltiplo do tamanho do
tipo inteiro. Em seguida, o usu�rio ter a 2 op��es: inserir um valor em uma
determinada posi��o ou consultar o valor contido em uma determinada posi��o. A
mem�ria deve iniciar com todos os dados zerados.
*/

int *pv;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,x,op,p,cont;
	
	do{
		printf("Informe quantos bytes voc� ir� querer alocar(informe um n�mero m�ltiplo de 4)");
		scanf("%d",&n);
	}while(n%4!=0);
	x=n/4;
	pv=(int*)malloc(x*sizeof(int));
	for(cont=0;cont<x;cont++){
		pv[cont]=0;
	}
	system("cls");
	printf("Informe qual op��o voc� deseja:\n\n1)Inserir um valor em determinada posi��o;\n2)Consultar o valor de determinada posi��o;\nOp��o escolhida: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			system("cls");
			printf("Informe a posi��o que voc� ir� querer alterar: ");
			scanf("%d",&p);
			printf("Informe o n�mero para a posi��o %d: ",p);
			scanf("%d",&pv[p-1]);
			break;
		case 2:
			system("cls");
			printf("Informe a posi��o que deseja verificar: ");
			scanf("%d",&p);
			printf("A posi��o %d contem o n�mero %d", p, pv[p-1]);
			break;
		default:
			printf("Op��o invalida");
			break;		
	}
	printf("\n\n");
	for(cont=0;cont<x;cont++){
		printf("%d\t",pv[cont]);
	}
}
