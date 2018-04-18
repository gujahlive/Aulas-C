#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
67 - Faça um programa que simule a memória de um computador: o usuário ir a
especificar o tamanho da memória, ou seja, quantos bytes serão alocados do tipo
inteiro. Para tanto, a memória solicitada deve ser um valor múltiplo do tamanho do
tipo inteiro. Em seguida, o usuário ter a 2 opções: inserir um valor em uma
determinada posição ou consultar o valor contido em uma determinada posição. A
memória deve iniciar com todos os dados zerados.
*/

int *pv;


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,x,op,p,cont;
	
	do{
		printf("Informe quantos bytes você irá querer alocar(informe um número múltiplo de 4)");
		scanf("%d",&n);
	}while(n%4!=0);
	x=n/4;
	pv=(int*)malloc(x*sizeof(int));
	for(cont=0;cont<x;cont++){
		pv[cont]=0;
	}
	system("cls");
	printf("Informe qual opção você deseja:\n\n1)Inserir um valor em determinada posição;\n2)Consultar o valor de determinada posição;\nOpção escolhida: ");
	scanf("%d",&op);
	switch(op){
		case 1:
			system("cls");
			printf("Informe a posição que você irá querer alterar: ");
			scanf("%d",&p);
			printf("Informe o número para a posição %d: ",p);
			scanf("%d",&pv[p-1]);
			break;
		case 2:
			system("cls");
			printf("Informe a posição que deseja verificar: ");
			scanf("%d",&p);
			printf("A posição %d contem o número %d", p, pv[p-1]);
			break;
		default:
			printf("Opção invalida");
			break;		
	}
	printf("\n\n");
	for(cont=0;cont<x;cont++){
		printf("%d\t",pv[cont]);
	}
}
