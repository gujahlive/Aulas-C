#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<conio.h>

/*
7 - Crie um programa que registre a produ��o e venda de um produto (ex. sabonete).
O programa deve ter um menu com as seguintes op��es:
1- Ver estoque (mostra o estoque atual)
2- Registrar produ��o (pergunta quantos itens foram produzidos e SOMA ao estoque)
3- Registrar venda (pergunta quantos itens foram vendidos e SUBTRAI do estoque)
4- Sair
Obs.:
a) n�o se pode vender se n�o h� estoque suficiente.
b) escolha um valor para o produto e mostre quanto custar� a venda (op.3) e quanto vale o
estoque (op.1) cada vez que a opcao for chamada
*/

int menu(){
	int op,qsabonete,volta=0;
	
	while(volta==0){
		system("cls");
		printf("Informe a op��o desejada: \n\n\n[1]Ver Estoque:\n\n[2]Registrar Produ��o:\n\n[3]Registrar Vendas:\n\n[4]Sair:\n\nOp��o: ");
		scanf("%d", &op);
		switch(op){
			case 1:
				system("cls");
				menu1(qsabonete);
				break;
			case 2:
				system("cls");
				qsabonete=menu2(qsabonete);
				break;
			case 3:
				system("cls");
				qsabonete=menu3(qsabonete);
				break;
			default:
				system("cls");
				printf("Deseja realmente encerrar o programa?");
				break;
		}
		printf("\n\nTecle [0] para voltar ao menu ou [1] para encerrar o programa: ");
		scanf("%d", &volta);
	}
}

int menu1(qs){
	float vs=0;
	vs=qs*2.50;
	printf("H� %d sabonete(s) em estoque no valor de R$%.2f Reais!\n\n\n\n",qs,vs);
	return(qs);
	
}

int menu2(int qs){
	
	int prod=0;
	printf("Quantos sabonetes foram produzidos? ");
	scanf("%d", &prod);
	prod=qs+prod;
	return(prod);
}

int menu3(int qs){
	int vend=0,qv=0;
	float vs=0;
	
	printf("Quantos sabonetes foram vendidos: ");
	scanf("%d", &vend);
	while(vend>qs){
		system("cls");
		printf("O n�mero de sabonetes em estoque �: %d\n\nInforme um n�mero de vendas menor ou igual ao n�mero de sabonetes em estoque: ",qs);
		scanf("%d",&vend);
	}
	qv=qs-vend;
	vs=vend*2.50;
	printf("\n\n%d sabonetes foram vendidos e renderam um valor de R$%.2f Reais",vend,vs);
	return(qv);
}

main(){
	setlocale(LC_ALL, "Portuguese");
	
	menu();
	
}
