#include<stdio.h>
struct TipoCliente{
	int codigo;
	char nome[50];
	char endereco[100];
	char telefone[12];
	char cpf[11];
	char eMail[30];
	float limiteDeCredito;
}Cliente;
main(){
	printf("Codigo: ");
	scanf("%d",&Cliente.codigo);
	fflush(stdin);
	printf("Nome: ");
	gets(Cliente.nome);
	printf("Endereco: ");
	gets(Cliente.endereco);
	printf("Telefone: ");
	gets(Cliente.telefone);
	printf("CPF: ");
    gets(Cliente.cpf);
	printf("Email: ");
	gets(Cliente.eMail);
	printf("Limite De CREDITO: ");
	scanf("%f",&Cliente.limiteDeCredito);		
	printf("Codigo: %d\n",Cliente.codigo);
	printf("Nome: %s\n",Cliente.nome);
	printf("Endereco: %s\n",Cliente.endereco);
	printf("Telefone: %s\n",Cliente.telefone);
	printf("CPF: %s\n",Cliente.cpf);
	printf("Email: %s\n",Cliente.eMail);
	printf("Limite: %.2f\n",Cliente.limiteDeCredito);
	printf("\t\t\t\tHIPERCARD AGRADECE");
	
}
