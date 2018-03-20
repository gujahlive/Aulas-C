#include<stdio.h>
#include<string.h>
main(){
	float mediaGp=0, mediaMulheres=0, mediaHomens=0,sumGp=0,sumF=0,sumM=0,sumTudo=0;
	int idade=0,i,contHomens=0, contTudo=0,contMulheres=0;
	char sexo;
	for(i=0;i<5;i++){
		printf("Insira a idade: ");
		scanf("%d",&idade);
		sumTudo += idade;
		fflush(stdin);
		printf("Insira o sexo [m] pra masculino [f] pra feminino: ");
		scanf("%c",&sexo);
		if(sexo=='m'){
			contHomens++;
			sumM += idade ;	
		
		}
		if(sexo=='f'){
			contMulheres++;
			sumF += idade ;
		}
		
		contTudo++;
		
	
	
	}
		 
	mediaGp = sumTudo/contTudo;
	mediaHomens = sumM / contHomens;
	mediaMulheres = sumF / contMulheres;
	
	printf("Media idade homens: %.2f\n", mediaHomens);
	printf("Media idade mulheres: %.2f\n", mediaMulheres);
	printf("Media idade Grupo: %.2f\n", mediaGp);
	printf("contHomens: %d\n",contHomens);
	printf("contMulheres: %d\n",contMulheres);
	printf("%.2f %.2f",sumF,sumM);
	
	
}
