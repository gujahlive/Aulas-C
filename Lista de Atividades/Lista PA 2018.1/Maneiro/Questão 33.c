#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
33 - Fac�a um programa que calcule o desvio padr�o de um vetor v contendo n = 10
n�meros, onde m e a m�dia do vetor.
*/

main(){
    setlocale(LC_ALL, "Portuguese");
    
    float m, media, sigma, p;
    int cont, vetor[10];
    media = 0;
    m = 0;
    sigma = 0;
    p = 0;
    for(cont = 0; cont < 10; cont++){
        printf("Digite um n�mero: ");
        scanf("%d", &vetor[cont]);
    }
    for(cont = 0; cont < 10; cont++){
        m = m + vetor[cont];
    }
    media = m / 10.0;
    for(cont = 0; cont < 10; cont++){
        p = p + (vetor[cont] - media);
    }
    sigma = sqrt((p * 1)/10);
    printf("Resultado do desvio padr�o = %.2f\n", sigma);
}
