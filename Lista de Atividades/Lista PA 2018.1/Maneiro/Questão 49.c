#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
49 - Fazer um programa que cria uma estrutura livro, que cont�m os elementos t�tulo,
ano de edi��o, n�mero de p�ginas e pre�o. Criar uma vari�vel desta estrutura que �
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
		printf("Informe o t�tulo do %d� livro: ", cont+1);
		fgets(livro[cont].titulo,30,stdin);
		printf("\nInforme o ano de edi��o do %d� livro, como no exemplo, [28/02/2018]: ", cont+1);
		fgets(livro[cont].anoe,10,stdin);
		fflush(stdin);
		printf("\nInforme o n�mero de p�ginas do %d� livro: ", cont+1);
		scanf("%f", &livro[cont].npaginas);
		printf("\nInforme o pre�o do %d� livro: ", cont+1);
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
		printf("Os dados do %d� livro s�o:\n\nT�tulo: %s\n\nAno de Edi��o: %s\n\nN�mero de P�ginas: %.4f\n\nPre�o do Livro: %.4f\n\n", cont+1, livro[cont].titulo, livro[cont].anoe, livro[cont].npaginas, livro[cont].preco);
	}
	printf("A m�dia das p�ginas de todos os livros �: %.4f", media);
}
