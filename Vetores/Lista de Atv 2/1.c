#include<stdio.h>
/*1- Dada uma sequ�ncia de n n�meros reais, determinar os n�meros que comp�em a
sequ�ncia e o n�mero de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Sequ�ncia: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
Sa�da: -1.7 ocorre 3 vezes
3.0 ocorre 1 vez
0.0 ocorre 2 vezes
1.5 ocorre 1 vez
2.3 ocorre 1 vez*/
main(){
	int tam,i,n,cont=0,j,comp=0;
	printf ("Digite o tamanho do vetor: ");
	scanf("%d",&tam); 
	
	int vet[tam];
	
	for (i=0;i<tam;i++){
		scanf("%d",&vet[i]);
	}
	
	for (i=0;i<tam;i++){
		for(j=0;j<tam;j++){
			comp = vet[i];
			if (comp == i){
				cont++;
			}else {
				comp = comp;
			}
		}
	}
	printf("\n");
	
	for (i=0;i<tam;i++){
		printf("%d aparece %d vezes \n",vet[i],cont);	
	}
	
	
	
}
