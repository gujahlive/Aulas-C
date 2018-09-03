#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
66 - Faca um programa que leia um numero N e:

„h Crie dinamicamente e leia um vetor de inteiro de N posicoes;

„h Leia um numero inteiro X e conte e mostre os multiplos desse numero que
existem no vetor.

*/

int *pv;

main(){
    setlocale(LC_ALL, "Portuguese");
    
	int n,x,cont;
    
	srand(time(NULL));
    printf("Informe o tamanho do vetor: ");
    scanf("%d",&n);
    
    pv = (int*)malloc(n*sizeof(int));
    
	for(cont=0;cont<n;cont++){
        pv[cont] = rand()%100+1;
    }
    
	printf("Informe o número para qual irá ser verificado se existe o múltiplo no vetor: ");
    scanf("%d",&x);
    
    for(cont=0;cont<n;cont++){
        if(pv[cont]%x==0){
            printf("%d é multiplo de %d\n",pv[cont],x);
        }
    }
}
