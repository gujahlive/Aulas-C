#include<stdio.h>//biblioteca input e output, entrada e saida
#include<string.h>//biblioteca de string, para usar o strcpy e outros
#include<stdlib.h>//executa funções do system(""); mas ta pegando sem
#include<locale.h>//importa a biblioteca de linguas
#include<math.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int x1,y1,x2,y2, subX,subY,rX,rY,sumXY;
	float result;
	printf("Calculo area distancia\n");
	printf("Insira o Valor de X1: ");
	scanf("%d",&x1);
	printf("Insira o Valor de X2: ");
	scanf("%d",&x2);
	printf("Insira o Valor de Y1: ");
	scanf("%d",&y1);
	printf("Insira o Valor de Y2: ");
	scanf("%d",&y2);
	subX = x2 - x1;
	subY = y2 - y1;
	rX = pow(subX, 2);
	rY = pow(subY, 2);
	sumXY = rX + rY;
	result = sqrt(sumXY);
	//printf("%.2f",result);
	printf("(RaizV( x2- x1)**2 + (y2 - y1)**2) == result\n");
	printf("(RaizV( %d - %d)**2 + (%d - %d)**2) == %.2f\n",x2,x1,y2,y1,result);
	
	
	//system("mkdir teste"); cria pasta
	system("pause");//pausa o sistema e pausa o executável
	//system("cls");// limpa a tela
	
}
