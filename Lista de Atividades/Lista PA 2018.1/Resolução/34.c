/*34 - Dada uma sequ�ncia de n n�meros reais, determinar os n�meros que comp�em a
sequ�ncia e o n�mero de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Sequ�ncia: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
Sa�da: -1.7 ocorre 3 vezes
 3.0 ocorre 1 vez
 0.0 ocorre 2 vezes
 1.5 ocorre 1 vez
 2.3 ocorre 1 vez
*/


#include<stdio.h>


main(){
	int n,i,igual, cont=0,num;
	printf("Insira N: ");
	scanf("%d",&n);
	int vet[n]; // crio um vetor de cont e um de numeros??? para saber os numeros repetidos???
	for(i=0; i<n ;i++){
		printf("Digite numeros: ");
		scanf("%d",&vet[i]);
		igual = vet[i];
	}
	for(i=0; i<n ;i++){
		if(igual == vet[i]){
			cont++;
			num =  vet[i];	
	
		}
	}
		
	printf("Numero : %d Ocorre: %d \n",num,cont);
	
	
	
	printf("\n\n\n\n\n");
	for(i=0; i<n ;i++){
		printf("%d\t",vet[i]);
	}
}
