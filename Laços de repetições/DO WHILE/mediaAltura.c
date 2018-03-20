#include<stdio.h>
main(){
	float alt,media,n,sum=0;
	int cont=0,contResult;
	do
	{
    	printf("Altura: ");
     	scanf("%f",&alt);
     	sum += alt;//Atribuindo altura, sum = sum + alt; e somando 
   		cont++;
   		contResult = cont - 1;
   		media = sum / contResult;
   		
   	}	
   		  
 
 	while(alt!=0);
	 printf("\nmedia: %.2f\n",media); 
	 printf("quantidade de alturas : %d\n",contResult);

 system("pause");   
}

