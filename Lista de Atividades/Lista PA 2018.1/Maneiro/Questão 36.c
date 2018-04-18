#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
36 - Fazer um programa em C que solicita um número inteiro e soletra o mesmo na
tela. Ex: 124: um, dois, quatro.
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int centena,dezena,unidade,n;
	char zero[5]={"zero"},um[3]={"um"},dois[5]={"dois"},tres[5]={"três"},quatro[7]={"quatro"},cinco[6]={"cinco"},seis[5]={"seis"},sete[5]={"sete"},oito[5]={"oito"},nove[5]={"nove"};
	
	
	printf("Informe um número inteiro de até três digitos: ");
	scanf("%d", &n);
	
	printf("\n\n");

	if(n>99){
		centena=n/100;
		dezena=(n%100)/10;
		unidade=(n%100)%10;
		if(centena==1){
			printf("%s, ",um);
		}
		if(centena==2){
			printf("%s, ",dois);
		}
		if(centena==3){
			printf("%s, ",tres);
		}
		if(centena==4){
			printf("%s, ",quatro);
		}
		if(centena==5){
			printf("%s, ",cinco);
		}
		if(centena==6){
			printf("%s, ",seis);
		}
		if(centena==7){
			printf("%s, ",sete);
		}
		if(centena==8){
			printf("%s, ",oito);
		}
		if(centena==9){
			printf("%s, ",nove);
		}
		if(dezena==1){
			printf("%s, ",um);
		}
		if(dezena==2){
			printf("%s, ",dois);
		}
		if(dezena==3){
			printf("%s, ",tres);
		}
		if(dezena==4){
			printf("%s, ",quatro);
		}
		if(dezena==5){
			printf("%s, ",cinco);
		}
		if(dezena==6){
			printf("%s, ",seis);
		}
		if(dezena==7){
			printf("%s, ",sete);
		}
		if(dezena==8){
			printf("%s, ",oito);
		}
		if(dezena==9){
			printf("%s, ",nove);
		}
		if(dezena==0){
			printf("%s, ",zero);
		}
		if(unidade==1){
			printf("%s ",um);
		}
		if(unidade==2){
			printf("%s ",dois);
		}
		if(unidade==3){
			printf("%s ",tres);
		}
		if(unidade==4){
			printf("%s ",quatro);
		}
		if(unidade==5){
			printf("%s ",cinco);
		}
		if(unidade==6){
			printf("%s ",seis);
		}
		if(unidade==7){
			printf("%s ",sete);
		}
		if(unidade==8){
			printf("%s ",oito);
		}
		if(unidade==9){
			printf("%s ",nove);
		}
		if(unidade==0){
			printf("%s ",zero);
		}
	}
	if(n<100 && n>9){
		dezena=(n%100)/10;
		unidade=(n%100)%10;
		if(dezena==1){
			printf("%s, ",um);
		}
		if(dezena==2){
			printf("%s, ",dois);
		}
		if(dezena==3){
			printf("%s, ",tres);
		}
		if(dezena==4){
			printf("%s, ",quatro);
		}
		if(dezena==5){
			printf("%s, ",cinco);
		}
		if(dezena==6){
			printf("%s, ",seis);
		}
		if(dezena==7){
			printf("%s, ",sete);
		}
		if(dezena==8){
			printf("%s, ",oito);
		}
		if(dezena==9){
			printf("%s, ",nove);
		}
		if(dezena==0){
			printf("%s, ",zero);
		}
		if(unidade==1){
			printf("%s ",um);
		}
		if(unidade==2){
			printf("%s ",dois);
		}
		if(unidade==3){
			printf("%s ",tres);
		}
		if(unidade==4){
			printf("%s ",quatro);
		}
		if(unidade==5){
			printf("%s ",cinco);
		}
		if(unidade==6){
			printf("%s ",seis);
		}
		if(unidade==7){
			printf("%s ",sete);
		}
		if(unidade==8){
			printf("%s ",oito);
		}
		if(unidade==9){
			printf("%s ",nove);
		}
		if(unidade==0){
			printf("%s ",zero);
		}
	}
	if(n<10){
		unidade=n;
		if(unidade==1){
			printf("%s ",um);
		}
		if(unidade==2){
			printf("%s ",dois);
		}
		if(unidade==3){
			printf("%s ",tres);
		}
		if(unidade==4){
			printf("%s ",quatro);
		}
		if(unidade==5){
			printf("%s ",cinco);
		}
		if(unidade==6){
			printf("%s ",seis);
		}
		if(unidade==7){
			printf("%s ",sete);
		}
		if(unidade==8){
			printf("%s ",oito);
		}
		if(unidade==9){
			printf("%s ",nove);
		}
		if(unidade==0){
			printf("%s ",zero);
		}
	}
}

