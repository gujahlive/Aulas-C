/*30 - Escreva um programa que leia um inteiro não negativo N e imprima a soma dos N
primeiros números primos. */
#include<stdio.h>
#include<math.h>
#include<locale.h>
main(){
	setlocale(LC_ALL, "Portuguese");
	unsigned int x,i, divisao = 0;

  
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
