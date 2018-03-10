#include<stdio.h>
#include<string.h>
main(){
	char nome[10],contrario[10],cont=0;//strcpy strcat, concate 
	int i,tamanho;
	printf("Digite uma palavra: ");
	gets(nome);
	tamanho = strlen(nome);
	for(i=tamanho-1 ;i>=0 ; i--){
		//printf("%c",nome[i]);
		cont++;
		contrario[cont-1] = nome[i];

	}
	//contrario[i] = strcpy(nome);
	printf("\ntamanho : %d\n",tamanho);
	printf("palavra: %s\n",nome);
	printf("contrario: %s\n",contrario);

	if (strcmp(nome,contrario)==0){
		printf("palindromo\n");
	}else printf("Não é palindromo\n");
	
	system("pause");
}
