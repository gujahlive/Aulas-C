#include<stdio.h>
#include<string.h>
main(){
	char *lista,l[] = {"Oiii\0"};
	lista = "Oiii";
    int tam = strlen(lista);
	printf("%s\n",lista);
	printf("%d\n",tam);
	printf("%s",l);
	
}
