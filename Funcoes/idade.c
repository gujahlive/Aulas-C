#include<stdio.h>
int calculaIdade(int ano_atual, int ano_nasc){
	int idade = ano_atual - ano_nasc;
	
	return idade;
}
main(){
	int nascimento,idade,atual;
	printf("Digite o nasc: ");
	scanf("%d",&nascimento);
	printf("Digite atual: ");
	scanf("%d",&atual);
	idade = calculaIdade(atual,nascimento);
	printf("Idade: %d",idade);
}
