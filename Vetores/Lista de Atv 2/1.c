#include<stdio.h>
/*1- Dada uma sequência de n números reais, determinar os números que compõem a
sequência e o número de vezes que cada um deles ocorre na mesma.
Exemplo: n = 8
Sequência: -1.7, 3.0, 0.0, 1.5, 0.0, -1.7, 2.3, -1,7
Saída: -1.7 ocorre 3 vezes
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
