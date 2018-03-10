#include<stdio.h>//biblioteca input e output, entrada e saida
#include<string.h>//biblioteca de string, para usar o strcpy e outros
#include<stdlib.h>//executa funções do system(""); mas ta pegando sem
#include<locale.h>//importa a biblioteca de linguas
#include<math.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int base,exp,result;
	
	scanf("%d",&base);
	scanf("%d",&exp);
	result = pow(base, exp);
	printf("Base: %d - Expoente: %d - Resultado: %d\n",base,exp,result);
	
	
	//system("mkdir teste"); cria pasta
	system("pause");//pausa o sistema e pausa o executável
	//system("cls");// limpa a tela
	
}
