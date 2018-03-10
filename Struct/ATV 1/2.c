#include<stdio.h>
struct tipoLivro{
	char titulo[30];
	char nomeAutor[30];
	char codId[5];
}livro[2];
main(){
	int i;
	printf("-------------------Cadastro Livros-------------------\n");
	for(i=0;i<2;i++){
		
		printf("Livro %d\n",i+1);
		printf("Titulo - livro %d:",i+1);
		gets(livro[i].titulo);
		printf("Nome do Autor - livro %d: ",i+1);
		gets(livro[i].nomeAutor);
		printf("Codigo de Indentificacao - livro %d: ",i+1);
		gets(livro[i].codId);
	}
	
	printf("\n-------------------Livros Cadastrados-------------------\n");
	for(i=0;i<2;i++){
		
		printf("\tLivro %d\n",i+1);
		printf("Titulo: %s - livro %d\n",livro[i].titulo,i+1);
		printf("Nome do Autor: %s - livro %d\n",livro[i].nomeAutor,i+1);
		printf("Codigo de Indentificacao : %s - livro %d\n",livro[i].codId,i+1);
		printf("\t");
	}
	
}
