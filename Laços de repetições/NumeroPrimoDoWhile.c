#include <stdio.h>
#include <stdlib.h>
#include<locale.h>

main() {
	
	setlocale(LC_ALL, "Portuguese");
  
  int  x,i, divisao = 0;
  
  do {
    printf("Digite um número inteiro e positivo: ");
    scanf("%d", &x);
  } while (x <= 0);
  
  for (i = 1; i <= x; i++) {
    if (x % i == 0) { 
     divisao++;
    }
  }
    
  if (divisao == 2){
  	 printf("O número %d é primo!", x);
  }
   
  else {
  	printf("O número %d não é primo!", x);
  }
    
}
