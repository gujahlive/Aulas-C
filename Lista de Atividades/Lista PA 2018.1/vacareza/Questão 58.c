#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
58 - O superfatorial de um número N é definida pelo produto dos N primeiros fatoriais de N.
Assim, o superfatorial de 4 é sf(4) = 1! * 2! * 3! * 4! = 288 Faça uma função recursiva que
receba um número inteiro positivo N e retorne o superfatorial desse número.
*/

int Superfat(int, int, int);

main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n, fat=1, result;
    
    printf("Informe o número para realizarmos o calculo do super fatorial: ");
    scanf("%d", &n);
    
    result=Superfat(n, n, fat);
    
    printf("\n\nO super fatorial de %d é: %d", n, result);
}


Superfat(n1, n2, FAT){
	
	n1=n2;
	if(n1==1){
		return FAT;
	}
	for(n1=n1;n1>=1;n1--){
		FAT=n1*FAT;
	}
	return Superfat(n1, n2-1, FAT);
}
