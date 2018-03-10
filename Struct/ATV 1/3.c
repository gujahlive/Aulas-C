#include<stdio.h>
struct tipoLivro{
	char titulo[30];
	char anoDeEdicao[30];
	int NumPag;
	float preco;
}livro[3];
main(){
	int i, cont=0;
	float sum=0,media=0;
	printf("-------------------Cadastro Livros-------------------\n");
	for(i=0;i<3;i++){
		fflush(stdin);
		printf("Livro %d\n",i+1);
		printf("Titulo: ");
		gets(livro[i].titulo);
		fflush(stdin);
		printf("Ano De Edicao: ");
		gets(livro[i].anoDeEdicao);
		printf("Numero de Paginas: ");
		scanf("&d",&livro[i].NumPag);
		printf("Ano De Edicao - livro %d: ",i+1);
		gets(livro[i].anoDeEdicao);
		printf("Numero de Paginas - livro : ");
		scanf("%d",&livro[i].NumPag);//não está acessando a propriedade, pq????
		fflush(stdin);
		printf("Preco: ");
		scanf("%f",&livro[i].preco);
		fflush(stdin);
		sum+=livro[i].NumPag;
		//cont++;
		fflush(stdin);
	}
	media = sum /3;
	printf("\n-------------------Livros Cadastrados-------------------\n");
	for(i=0;i<3;i++){
		
		printf("Livro %d\n",i+1);
		printf("Titulo: %s - livro %d\n",livro[i].titulo);
		printf("Nome do Autor: %s \n",livro[i].anoDeEdicao);
		printf("numero de paginas: %d\n",livro[i].NumPag);
		printf("Preco: %.2f \n",livro[i].preco);
		printf("Titulo: %s \n",livro[i].titulo);
		printf("Nome do Autor: %s \n",livro[i].anoDeEdicao);
		printf("numero de paginas: %d\n",livro[i].NumPag);
		printf("Preco: %.2f - \n",livro[i].preco);
		printf("\t");
	}
	
	printf("Media: %.2f",media);
	

	
}
