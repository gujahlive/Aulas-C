#include<stdio.h>
#include<string.h>
main(){
	char nome[16];
	int cont=0, i,tamanho;
	printf("Digite o nome: ");
	gets(nome);
	tamanho = strlen(nome);
	printf("%s tem  %d letras\n",nome,tamanho);
	for (i=0 ; i<tamanho ; i++){
		printf("%s [%d]\n",nome,i+1);
	}
	
	
}
