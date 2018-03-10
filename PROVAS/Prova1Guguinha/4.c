#include<stdio.h>
#include<string.h>
main(){
	char palavra[3][3],palavraD[3],concat[3],a;
	int l,c,cC=0,i,cL=0,cont1=0,cont2=0,tamanho;
	
	
	for(l=0;l<3;l++){
		fflush(stdin);
		for(c=0;c<3;c++){
			fflush(stdin);
			printf("L[%d]C[%d]: ",l,c);
	        scanf("%c",&palavra[l][c]);	
			fflush(stdin);	
		}
		fflush(stdin);
	}
	
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("%c ",palavra[l][c]);	
		}
		printf("\t");
	}
	printf("\n");
	printf("Digite uma palavra: ");
	gets(palavraD);

	printf("Palavra Digitada: %s\n",palavraD);
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			if (palavraD[cont1]==palavra[l][c]){
					cL++;
					cont1++;
			}else{
				cont1=0;
			}
		}
	}
	
	for(c=0;c<3;c++){
		for(l=0;l<3;l++){
			if (palavraD[cont2]==palavra[l][c]){
					cC++;
					cont2++;
			}else{
				cont2=0;
			}
		}
	}
	tamanho=strlen(palavraD);
	tamanho-1;
	if (cL==tamanho||cC==tamanho){
		printf("A palavra foi encontrada\n");
	}else{
		printf("A palavra não foi encontrada\n");
	}
	
	system("pause");
}
