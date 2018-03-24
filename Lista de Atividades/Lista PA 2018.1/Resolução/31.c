/*31 - Fazer um programa que lê um conjunto de 10 valores e os imprime ordenados.
*/
#include<stdio.h>
main(){
	int n[5],i,ordem,maior;
	
	for(i=0;i<5;i++){
		printf("%d: ",i+1);
		scanf("%d",&n[i]);
		
	}
	maior = n[i];
	
	for(i=0;i<5;i++){
		if(n[i]> maior){
			maior = n[i] ;
		}
	}
	printf("\n\n\n");
	for(i=0;i<5;i++){
		printf("%d: %d\n",i+1,n[i]);

	}
	printf("Maior: %d",maior);
	
	
}
