#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
18 - Faça um programa que leia uma data qualquer (dia, mês e ano) e calcule a data do
próximo dia. Lembre-se que em anos bissextos o mês de fevereiro tem 29 dias. (Dica:
um ano é bissexto quando for divisível por 4)
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	int dia,mes,ano;
	
	
	printf("Informe o dia: ");
	scanf("%d", &dia);
	printf("\n\nInforme o mês: ");
	scanf("%d", &mes);
	printf("\n\nInforme o ano: ");
	scanf("%d", &ano);
	
	if(mes==1 || mes==3 || mes==5 || mes==7 || mes==8 || mes==10){
		if(dia==31){
			dia=1;
			mes++;
			printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
			exit(0);
		}
		if(dia<31 && dia>=1){
			dia++;
			printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
			exit(0);
		}
		printf("\n\nA data informada é inválida");
		exit(0);
	}
	if(mes==4 || mes==6 || mes==9 || mes==11){
		if(dia==30){
			dia=1;
			mes++;
			printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
			exit(0);
		}
		if(dia<30 && dia>=1){
			dia++;
			printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
			exit(0);
		}
		printf("\n\nA data informada é inválida");
		exit(0);
	}
	if(mes==2){
		if((ano%4==0) && (mes==2)){
			if(dia==29){
				dia=1;
				mes++;
				printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
				exit(0);
			}
			if(dia<29 && dia>=1){
				dia++;
				printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
				exit(0);
			}
			printf("\n\nA data informada é inválida");
				exit(0);
		}
		if((ano%4!=0) && (mes==2)){
			if(dia==28){
				dia=1;
				mes++;
				printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
				exit(0);
			}
			if(dia<28 && dia>=1){
				dia++;
				printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
				exit(0);
			}
		}
		if(dia<28 && dia>=1){
			dia++;
			printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
			exit(0);
		}
		printf("\n\nA data informada é inválida");
		exit(0);
	}
	if(mes==12){
		if(dia==31){
			dia=1;
			mes=1;
			ano++;
			printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
			exit(0);
		}
		if(dia<31 && dia>1){
			dia++;
			printf("\n\nA data do dia seguinte será %d/%d/%d",dia,mes,ano);
			exit(0);
		}
		printf("\n\nA data informada é inválida");
		exit(0);
	}
	printf("\n\nA data informada é inválida");
	exit(0);
	
}
