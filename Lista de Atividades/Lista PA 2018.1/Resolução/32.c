/*32 - Fa�a um programa que leia um vetor de 10 n�meros. Leia um n�mero x. Conte os
m�ltiplos de um n�mero inteiro � x num vetor e mostre-os na tela.
*/
//N�o entendi o enunciado.
#include<stdio.h>


main(){
	int vet[10], i,x,mult[10];
	for (i=0 ;i<10 ;i++){
		printf("VET[%d]: ",i);
		scanf("%d",&vet[i]);	
	}
	printf("digite um numero: ");
	scanf("%d",&x);
	for (i=0 ; i<10 ;i++){
		mult[i] = vet[i] * x;
	}
	
	printf("indices multiplicados por %d\n",x);	
	for (i=0 ; i<10 ;i++){
		printf(" %d * %d =  %d\n",vet[i],x,mult[i]);
	}	
	
	
	system("pause");
}
