#include<string.h>
#include<stdio.h>
main(){
	char nome[16];
	int cont=0,i,Total=0;
	printf("Nome: ");
	gets(nome);
	Total = strlen (nome);
	for (i=0;i<Total;i++){
		if (nome[i] == 'a' || nome[i] == 'A'){
			cont++;
		}
	}
	if (cont == 0 ){
		printf("Nome : %s non tem letra A",nome,cont);
	}else if(cont == 1)printf("Nome : %s tem, uma letra 'A'\n",nome,cont); else printf("Nome : %s tem %d letras A",nome,cont);


	
}
