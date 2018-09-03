#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
58 - O superfatorial de um n�mero N � definida pelo produto dos N primeiros fatoriais de N.
Assim, o superfatorial de 4 � sf(4) = 1! * 2! * 3! * 4! = 288 Fa�a uma fun��o recursiva que
receba um n�mero inteiro positivo N e retorne o superfatorial desse n�mero.
*/

int Superfat(int, int, int);

main(){
    setlocale(LC_ALL, "Portuguese");
    
    int n, fat=1, result;
    
    printf("Informe o n�mero para realizarmos o calculo do super fatorial: ");
    scanf("%d", &n);
    
    result=Superfat(n, n, fat);
    
    printf("\n\nO super fatorial de %d �: %d", n, result);
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
