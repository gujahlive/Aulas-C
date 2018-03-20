#include<stdio.h>
main(){
	
	int n,sum=0, contInferior=0, ResultContInferior=0,contPositivo=0;
	float media=0;
	
	
	do{
    	printf("Quando quiser encerrar tecle 0\nInsira os numeros: ");
     	scanf("%d",&n);
     	if (n<10){
     		contInferior++;
		}
		if(n>0){
		 	sum += n; 	
		 	contPositivo++;
		 	
		}
		
		
		//printf("teste"); 
		media = sum / contPositivo; 
		ResultContInferior = contInferior - 1;
     
   	}while(n!=0);
   	
	printf("\nmedia dos positivos: %.2f\n",media); 
	printf("quantidade de numeros inferior a 10 : %d\n",ResultContInferior);
	system("pause");   
}

