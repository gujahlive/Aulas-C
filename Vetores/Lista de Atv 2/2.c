#include<stdio.h>
/*2 - Faça um algoritmo que leia um vetor K[30]. Troque a seguir, todos os elementos de ordem
ímpar do vetor com os elementos de ordem par imediatamente posteriores.*/
main(){
	int k[4],i ,troca[4];
	
	for(i=0; i<4 ; i++){
		printf("Insira: ");
		scanf("%d",&k[i]);
		if(i%2==0){
			
			i = i - 1;
		}
			
		
	}

	printf("\n");
	for (i=0 ;i<4 ; i++){
		printf("%d ",k[i]);
		
	}
	
	printf("\n");
	system("pause");
	
}
