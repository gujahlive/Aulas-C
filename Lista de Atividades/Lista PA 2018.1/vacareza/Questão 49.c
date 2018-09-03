#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
49 - Fazer um programa que cria uma estrutura livro, que contém os elementos título,
ano de edição, número de páginas e preço. Criar uma variável desta estrutura que é
um vetor de 5 elementos. Ler
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	struct tipolivro{
		char titulo[31], anoe[11];
		float npaginas, preco;
	}livro[5];
	int cont,x=0;
	float media=0;
	
	for(cont=0;cont<5;cont++){
		printf("Informe o título do %d° livro: ", cont+1);
		fgets(livro[cont].titulo,30,stdin);
		printf("\nInforme o ano de edição do %d° livro, como no exemplo, [28/02/2018]: ", cont+1);
		fgets(livro[cont].anoe,10,stdin);
		fflush(stdin);
		printf("\nInforme o número de páginas do %d° livro: ", cont+1);
		scanf("%f", &livro[cont].npaginas);
		printf("\nInforme o preço do %d° livro: ", cont+1);
		scanf("%f", &livro[cont].preco);
		fflush(stdin);
		media=livro[cont].npaginas+media;
		x++;
		printf("\n\n========================================\n\n"); 
	}
	media=media/x;
	system("cls");
	for(cont=0;cont<5;cont++){
		printf("========================================\n");
		printf("Os dados do %d° livro são:\n\nTítulo: %s\n\nAno de Edição: %s\n\nNúmero de Páginas: %.4f\n\nPreço do Livro: %.4f\n\n", cont+1, livro[cont].titulo, livro[cont].anoe, livro[cont].npaginas, livro[cont].preco);
	}
	printf("A média das páginas de todos os livros é: %.4f", media);
}
