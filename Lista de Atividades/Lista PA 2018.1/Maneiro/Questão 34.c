#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>

/*
34 - Dada uma sequência de n números reais, determinar os números que compõem a
sequência e o número de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
Saída: 
		-1.7 ocorre 3 vezes
		3.0 ocorre 1 vez
		0.0 ocorre 2 vezes
		1.5 ocorre 1 vez
		2.3 ocorre 1 vez
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int cont,cont2,n,x=1;
	
	printf("Informe o tamanho do vetor: ");
	scanf("%d", &n);
	
	float vet[n],vet2[n];
	
	system("cls");
	for(cont=0;cont<n;cont++){
		printf("Informe o %d° número do vetor: ",cont+1);
		scanf("%f", &vet[cont]);
		vet2[cont]=vet[cont];
	}
	for(cont=0;cont<n;cont++){
		x=1;
		for(cont2=0;cont2<n;cont2++){
			if(vet[cont]==vet2[cont2] && cont!=cont2){
				x++;
			}
		}
		printf("\n%.1f ocorre %d vez(es)", vet[cont],x);
	}

}
