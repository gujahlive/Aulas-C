#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
38 - Escreva um algoritmo em C que receba um string um caractere e o �ndice de uma
posi��o do string como par�metro e insira o caractere na posi��o "empurrando" todos
os demais para o lado.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	char nome[51],novonome[52],letra;
	int cont=0,cont2=0,p,t;
	
	printf("Informe um nome: ");
	fgets(nome,50,stdin);
	fflush(stdin);
	printf("\nInforme a letra que ser� adicionada: ");
	scanf("%c", &letra);
	printf("\nInforme a posi��o do vetor onde a letra escolhida ir� entrar: ");
	scanf("%d", &p);
	t=strlen(nome);
	do{
		if(cont==p){
			novonome[cont]=letra;
			cont++;
		}else{
			novonome[cont]=nome[cont2];
			cont2++;
			cont++;
		}
	}while(cont2<t+1);
	system("cls");
	printf("========================================\n\nNome informado: %s\n\nLetra adicionada: %c\n\nNome com a letra adicionada: %s\n\n========================================", nome, letra, novonome);
}
