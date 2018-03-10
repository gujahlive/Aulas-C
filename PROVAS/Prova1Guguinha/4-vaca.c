#include<stdio.h>
#include<locale.h>
#include<string.h>

main(){
	setlocale(LC_ALL,"Portuguese");
	char mat[5][5],pesquisa[5];
	int L=0,C=0,tam=0,contL=0,contC=0,cont1=0,cont2=0;
	for(L=0;L<5;L++){
		for(C=0;C<5;C++){
			fflush(stdin);
			printf("Digite uma letra para a posição %d,%d da matriz: \n",L,C);
			scanf("%c",&mat[L][C]);
			fflush(stdin);
		}
	}		
	printf("Digite uma palavra para procurar no caça palavras:\n");
	fgets(pesquisa,5,stdin);	
	for(L=0;L<5;L++){
		for(C=0;C<5;C++){
			if (pesquisa[cont1]==mat[L][C]){

					contL++;
					cont1++;
			}else{
				cont1=0;
			}
		}
	}
	for(C=0;C<5;C++){
		for(L=0;L<5;L++){
			if (pesquisa[cont2]==mat[L][C]){

					contC++;
					cont2++;
			}else{
				cont2=0;
			}
		}
	}
	tam=strlen(pesquisa);
	tam--;
	if (contL==tam||contC==tam){
		printf("A palavra foi encontrada\n");
	}else{
		printf("A palavra não foi encontrada\n");
	}
	printf("contL %d contC %d tam %d",contL,contC,tam);
	system("pause");
}
