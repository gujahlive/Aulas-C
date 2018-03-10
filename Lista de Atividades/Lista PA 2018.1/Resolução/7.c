#include<stdio.h>
struct TipoProduto{
	int quantidade;
	float preco;
	char nome[31];
}produto[2];

int Menu(){	


int swt,i,quant=0,retirar;
	printf("-------------------------------\n\t");
	printf("1 - Ver Estoque\n\t");
	printf("2 - Registrar producao\n\t");
	printf("3 - Registrar venda\n\t");
	printf("4 - SAIR\n");
	printf("X: ");
	scanf("%d",&swt);
	switch (swt){
		case 1:
		/*if(quant==0){
			printf("\n\n\tESTOQUE VAZIO!\n\n");// não ta caindo no else só cai no if direto
			Menu();
			
		}else if(quant>0){}*/
		printf("------------------ ");
		for(i=0;i<=quant;i++){//não lista todos os produtos
			printf("Nome: %s\t",produto[i].nome);
			printf("Preco: %.2f\t",produto[i].preco);
			printf("Quantidade: %d\t",produto[i].quantidade);
		}printf(" ------------------\n\n");Menu();break;
	
		case 2:
		for(i=0;i<=quant;i++){
		fflush(stdin);
		printf("Nome: ");
		gets(produto[i].nome);
		fflush(stdin);
		printf("Preco: ");
		scanf("%f",&produto[i].preco);	
		fflush(stdin);
		printf("Quantidade: ");
		scanf("%d",&produto[i].quantidade);
		quant++;
		fflush(stdin);
		Menu();
		printf("\n");
			
		}	
		
		break;
		case 3:
			printf("Subtrair do item : %s\n",produto[i].nome);
			printf("Quantidade Atual: %d\n",produto[i].quantidade);
			printf("Quantidade a sair: \n");
			scanf("%d",&retirar);
			produto[i].quantidade -= retirar;
			printf("Quantidade Atual: %d\n\n",produto[i].quantidade);
		Menu();
		break;
		case 4:system("exit");break;
		
		default: printf("Nenhuma das alternativas corretas\n\n"); Menu();
	}

	
}


main(){
	
	Menu();
	
}
