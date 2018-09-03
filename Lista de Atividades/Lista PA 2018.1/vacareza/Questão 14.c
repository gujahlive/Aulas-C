#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
14 - Leia uma data de nascimento de uma pessoa fornecida atraves de tres numeros inteiros:
Dia, Mes e Ano. Teste a validade desta data para saber se esta e uma data valida. Teste se o
dia fornecido e um dia valido: dia > 0, dia . 28 para o mes de fevereiro (29 se o ano for
bissexto), dia . 30 em abril, junho, setembro e novembro, dia . 31 nos outros meses. Teste a
validade do mes: mes > 0 e mes < 13. Teste a validade do ano: ano . ano atual (use uma
constante definida com o valor igual a 2008). Imprimir: gdata validah ou gdata invalidah no final
da execucao do programa.
*/


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int dia,mes,ano,x=0;
	
	printf("Informe o dia de seu nascimento: ");
	scanf("%d", &dia);
	printf("\n\nInforme o mês de seu nascimento: ");
	scanf("%d", &mes);
	printf("\n\nInforme o ano de seu nascimento: ");
	scanf("%d", &ano);
    if ((dia >= 1 && dia <= 31) && (mes >= 1 && mes <= 12) && (ano >= 1 && ano <= 2008)){
            if ((dia == 29 && mes == 2) && ((ano % 4) == 0)){
                x++;
            }
            if (dia <= 28 && mes == 2){
            	x++;
            }
            if ((dia <= 30) && (mes == 4 || mes == 6 || mes == 9 || mes == 11)){
                x++;
            }
            if ((dia <=31) && (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes ==8 || mes == 10 || mes == 12)){
                x++;
            }
    }else{
    	x=0;
    }
	if(x>=1){
    	printf("\n\nData Válida");
	}
	if(x==0){
		printf("\n\nData Inválida");
	}
}
