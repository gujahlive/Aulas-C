#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
26 – Faça um programa que calcule o menor número divisível por cada um dos
números de 1 a 20? Ex: 2520 e o menor número que pode ser dividido por cada um
dos números de 1 ´ a 10, sem sobrar resto.
*/

main(){
	setlocale(LC_ALL, "Portuguese");

	int numero=1, divisor, cont; 
	
	printf("O programa não travou, vai demorar uns 22 segundos para a resposta!");
	while (numero > 0) { 
      divisor = 1; 
      cont = 0; 
      while (divisor <= 20) { 
         if(numero % divisor == 0) 
            cont++; 
         divisor++; 
      } 
      if (cont == 20) 
         break; 
      numero++; 
   } 
   printf("\n\n\nO menor número divisível por cada um dos números de 1 a 20 é: %d", numero); 

}
