#include<stdio.h>
#include<locale.h>
/*4 - Dados dois vetores x e y, ambos com n elementos, determinar o produto escalar desses
vetores. Obs: Produto escalar � a soma de todos os produtos.
*/
main(){
	setlocale(LC_ALL, "Portuguese");
	
	int tam,i,n,cont=0;
	printf ("Digite o tamanho do vetor: ");
	scanf("%d",&tam); 
	
	int x[tam],y[tam],mult[tam],sumTudo=0,xmult=0,ymult=0;
	
	
	for (i=0;i<tam;i++){
		printf("Povoe o vetor X Posi��o [%d]: ",i);
		scanf("%d",&x[i]);
		printf("Povoe o vetor Y Posi��o [%d]: ",i);
		scanf("%d",&y[i]);
	}
	for (i=0; i<tam ; i++){
		
		mult[i] = x[i] * y[i] ;

		
	}
	for (i=0; i<tam ; i++){
		sumTudo+=mult[i];
	}
	
	printf("\n");

	for(i=0 ; i<tam ; i++ ){
		printf("multiplica��o %d - posi��o %d\n",mult[i],i);
	}
	printf("\n");
	printf("Soma de Tudo:  %d\n",sumTudo);

	
	
	
	
}
