#include<stdio.h>
#include<string.h>
main(){
	char nome[21],inverso[21];
	int i,tamanho;
	printf("digite um nome para ser impresso ao contrário: ");
	gets(nome);
	tamanho = strlen(nome);
	for (i=tamanho-1; i >=0 ; i--){
		printf("%c",nome[i]);
	}

}
