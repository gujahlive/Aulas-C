#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
65 - Escreva uma fun��o que receba um array de inteiros V e os endere�os de duas
vari�veis inteiras, min e max, e armazene nessas vari�veis o valor m�nimo e m�ximo do
array. Escreva tamb�m uma fun��o main que use essa fun��o.
*/

int *pv, *pmai, *pmen;

void func(int);

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont,n;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	
	int vet[n];
	system("cls");
	
	for(cont=0;cont<n;cont++){
		printf("Informe um n�mero para a posi��o %d do vetor: ",cont+1);
		scanf("%d", &vet[cont]);
		printf("\n");
	}
	
	pv = &vet;
	func(n);
	
	printf("O maior n�mero do vetor � %d e o menor � %d", *pmai, *pmen);
	
}


func(N){
	
	int maior, menor,cont;
	
	maior = pv[0];
	menor = pv[0];
	
	for(cont=1;cont<N;cont++){
		if(pv[cont]>maior){
			maior=pv[cont];
		}
		if(pv[cont]<menor){
			menor=pv[cont];
		}
	}
	
	pmai=&maior;
	pmen=&menor;
	
	return 0;
	
}
