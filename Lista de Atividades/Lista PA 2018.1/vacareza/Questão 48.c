#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
#include<locale.h>


main(){
	
	struct tipocarro{
		char marca[21];
		int ano;
		int qporta;
		float preco;
	}carronovo;
	
	setlocale(LC_ALL, "Portuguese");

	int cont,x=0,qcarro,novo=0;
	float mediap=0;
	char mnovo[21];

	printf("Informe a quantidade de carros que voc� vai registrar: ");
	scanf("%d", &qcarro);
	fflush(stdin);
	
	struct tipocarro carro[qcarro];

	for(cont=0;cont<qcarro;cont++){
		system("cls");
		printf("Informe a marca do %d� carro: ",cont+1);
		fgets(carro[cont].marca,20,stdin);
		fflush(stdin);
		printf("\n\nInforme o ano de lan�amento do %d� carro: ",cont+1);
		scanf("%d", &carro[cont].ano);
		printf("\n\nInforme a quantidade de portas do %d� carro: ",cont+1);
		scanf("%d", &carro[cont].qporta);
		printf("\n\nInforme o pre�o do %d� carro: ",cont+1);
		scanf("%f", &carro[cont].preco);
		fflush(stdin);
		mediap=mediap+carro[cont].preco;
		x++;
		fflush(stdin);
		if(carro[cont].ano>novo){
			carronovo=carro[cont];
			novo=carro[cont].ano;
		}
		
	}
	mediap=mediap/x;
	system("cls");
	printf("========================================\n\nA m�dia de pre�o dos carros � %.2f,\no carro mais novo � da marca %s,\ndo ano de %d, tem o valor de R$%.2f, e tem %d portas.\n\n========================================\n\n", mediap, carronovo.marca, carronovo.ano,carronovo.preco,carronovo.qporta); 
}
