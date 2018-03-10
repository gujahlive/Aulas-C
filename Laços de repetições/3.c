#include<stdio.h>

main(){
	int x[5], i,maior ,menor,t, cont;
	
	for(i=0 ; i<5 ; i++){
		printf("Insira os valores: ");
		scanf("%d",&x[i]);
		
		if(x[i]==0){
			system("pause");
			
		}else if(x[i] > maior ){
			
			maior = x[i];
			menor = 0;
			
			
		} else if(menor < x[i]){
			menor = x[i];
			
		}
	}
	printf("\nMaior: %d  - Menor: %d\n",maior,menor);
	
	
}
