#include<stdio.h>
#include<locale.h>
#include<string.h>
int Menu (){
	int e, SegDigitados,i;
	char comando[25],Segundos[25],Comando[2];
	printf("1 - desligar em 1 minuto.\t");
	printf("2 - desligar em 2 minutos.\n");
	printf("3 - desligar em 3 minutos.\t");
	printf("4 - desligar em 4 minutos.\n");
	printf("5 - desligar em 5 minutos.\t");
	printf("6 - Escolher quantos minutos.\n");
	printf("7 - HIBERNAR.\t                ");
	printf("8 - DESLIGAR AGORA.\n");
	printf("9 - ESCREVA O COMANDO.\t        ");
	printf("10 - CANCELAR AGEDAMENTO.\n\nESCOLHA:");
	scanf("%d",&e);
	switch(e){
	case 1 :
		printf("vou desligar em 1 minuto.");
		system("shutdown -s -t 60 ");
		break;
	case 2 :
		printf("vou desligar em 2 minutos");
		system("shutdown -s -t 120 ");
		break;
	case 3 :
		printf("vou desligar em 3 minutos");
		system("shutdown -s -t 180 ");
		break;
	case 4 :
		printf("vou desligar em 4 minutos");
		system("shutdown -s -t 240 ");
		break;
	case 5 :
		printf("vou desligar em 5 minutos");
		system("shutdown -s -t 300 ");
		/*printf("Deseja Cancelar?\nS - SIM   N - NÃO     M - Voltar ao Menu\n: ");
		scanf("%c",&decisao);
		if(decisao == 's' || decisao == 'S'){
			system ("shutdown -a");
		} else printf("Agendamento Mantido\n");*/
		break;
	case 6 : 
		printf("\ndigite em SEGUNDOS,\nquanto tempo você quer que a maquina desligue: ");
		scanf("%d",&SegDigitados);
	    strcpy(Comando[0],"shutdown -s -t ");
	    printf("A Maquina Será Desligada em %d Segundos\n",SegDigitados);
		strcpy(Comando[1],SegDigitados);
		system(Comando);
		
		break;
		
	case 7 :
		printf("vou hibernei :)");
		system("shutdown -h");
		break;
	case 8 :
		printf("vou desliguei :)");
		system("shutdown -s");
		break;
	case 9 :
		fflush(stdin);
		printf("Escreva o comando:\n");
		gets(comando);
		system(comando);
		break;
	case 10 :
		printf("Agendamento Cancelado :(");
		system("shutdown -a");
		break;
	default:printf("Opção incorreta!\n");
	}
	
}
// fgets (str, 256, stdin); (Variavel, limite, entrada por teclado)



main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	int e, SegDigitados,i;
	char decisao;
	
	Menu();
	
	if (e != 10){
		
			printf("Deseja Cancelar?\n1 - SIM   2 - NÃO     3 - Voltar ao Menu\n:");
	scanf("%d",&i);
	if(i == 1 ){
			system ("shutdown -a");
			printf("Agendamento Cancelado :(\n");
		} else if(i == 3){
			 Menu();

			
		}else printf("Agendamento Mantido\n");
	
	
	}

}
