#include<stdio.h>
main(){
int i,x,cont=0;
i=0;
do
{
     printf("Entre com um numero\n");
     scanf("%d",&x);
      i=i+1;
   if (x<18)
   cont++;
  else
   cont=cont;
   
  }  
 
 while(i<10);
 printf("quantidade de pessoas menor de idade: %d",cont); 

 system("pause");   
}

