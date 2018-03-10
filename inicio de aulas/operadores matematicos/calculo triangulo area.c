#include<stdio.h>//biblioteca input e output, entrada e saida
#include<string.h>//biblioteca de string, para usar o strcpy e outros
#include<stdlib.h>//executa funções do system(""); mas ta pegando sem
#include<locale.h>//importa a biblioteca de linguas
#include<math.h>

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float p,a,b,c, s,subPA,subPB,subPC,multTudo,ResultFinal,ResultABC;
	float result;
	printf("Calculo area do triangulo\n");
	printf("Insira o Valor de A: ");
	scanf("%f",&a);
	printf("Insira o Valor de B: ");
	scanf("%f",&b);
	printf("Insira o Valor de C: ");
	scanf("%f",&c);
	
	p = (a +b +c )/2;
	
	subPA = p - a;
	subPB = p - b;
	subPC = p - c;
	multTudo = p * subPA * subPB * subPC ;
	s = sqrt(multTudo);
	printf("p = a + b + c / 2\n");
	printf("%.2f = %.2f + %.2f + %.2f / 2 \n",p,a,b,c);
	printf("S = RaizV de p. (p - a ) . (p - b) . (p - c)\n");
	printf("%.2f = %.2f . (%.2f - %.2f ) . (%.2f - %.2f ) . (%.2f - %.2f )\n",s,p,p,a,p,b,p,c);
	printf("%.2f = %.2f . %.2f. %.2f . %.2f \n",s,p,subPA,subPB,subPC);
	//printf("%.2f\n", s);
	
	
	//system("mkdir teste"); cria pasta
	system("pause");//pausa o sistema e pausa o executável
	//system("cls");// limpa a tela
	
}
