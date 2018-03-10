#include<stdio.h>
#include<string.h>
main(){
	char sigla[3],estado[15];
	int i;
	
	printf("Digite a sigla: ");
	gets(sigla);
	if(!strcmp(sigla,"rj") || !strcmp(sigla,"RJ")){
		printf("Rio de Janeiro - Carioca\n");
	} else 	if(!strcmp(sigla,"mg") || !strcmp(sigla,"MG")){
		printf("Minas Gerais - Mineiro\n");
	} else 	if(!strcmp(sigla,"sp") || !strcmp(sigla,"SP")){
		printf("Sao Paulo - Paulista\n");
	} else 	printf("Outros estados");
		
}
