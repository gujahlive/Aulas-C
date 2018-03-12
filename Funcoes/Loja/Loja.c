#include<stdio.h>
#include<locale.h>
#include<string.h>
struct TipoProduto{
char nome[21], marca[21];
int quant;
float preco;
};// vou ter que fazer uma struct para retornar os valores dessa aqui, pra depois padssar pra uma função, senão dá erro, e eu não sei qual a melhor opção em fazer isso sem fazer uma struct retornante pq isso vai embaçar mais ainda, #entediante

struct TipoFunc{
char nome[21], sobreNome[21];
int CPF,RG;
float sal;
};

struct TipoProduto CadProduto (char nomeP[21], char marcaP[21] , int quantP , float precoP ){//eu devo passar como parametro os elementos do struct???
	struct TipoProduto Produto;
    strcpy(Produto.marca,marcaP);
	strcpy(Produto.nome,nomeP);
	Produto.preco = precoP;
	Produto.quant = quantP;
	
	return Produto;// como retorna uma struct???
	
}
int CadFunc(){
	return 0;
}
int ListProduto(){
	return 0;
}
int ListFunc(){
	return 0;
}
int ExcluirProduto(){
	return 0;
}
int ExcluirFunc(){
	return 0;
}

main(){
	float precoProd;
	char nomeProd[21],marcaProd[21];
	int RG,CPF;//somente pro funcionario, pra passar por parametro;
	int i,e,quantidadeProduto,quantCad;//somente pro switch e pro produto
	setlocale(LC_ALL, "Portuguese");
	printf("\t\tBem Vindo à loja DoceMel\n\n");
	printf("1 - Cadastrar Produto\n");
	printf("2 - Cadastrar Funcionário\n");
	printf("3 - Listar Produto\n");
	printf("4 - Listar Funcionários\n");
	printf("5 - Excluir Produto\n");
	printf("6 - Excluir Funcionário\n");
	printf("Opção: ");
	scanf("%d",&e);
	switch(e){
		case 1: 
		printf("Quantidade de produtos à cadastrar: ");//ainda n pega por conta de logica
		scanf("%d",&quantCad);
		fflush(stdin);
		//for (i=0;i<quantCad;i++){
		printf("Nome do produto: ");
		gets(nomeProd);
		printf("Marca do produto: ");
		gets(marcaProd);
		fflush(stdin);
		printf("Quantidade do produto: ");
		scanf("%d",&quantidadeProduto);
		printf("Preco do produto: ");
		scanf("%f",&precoProd);
		fflush(stdin);
		CadProduto(nomeProd,marcaProd,quantidadeProduto,precoProd);
		fflush(stdin);	
	//}
		 break;
		
		
		case 2: CadFunc(); break;
		case 3: ListProduto(); break;
		case 4: ListFunc(); break;
		case 5: ExcluirProduto;break;
		case 6: ExcluirFunc();break;
		default:printf("Opção errada, tente novamente");
	}
	
	printf("%s");
	
	
}
