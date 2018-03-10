#include<stdio.h>
main(){

	int m[3][3],sumLinhas=0,sumColunas=0,sumDiag=0,sumSec=0,cont=1;
	int l,c;
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
	        scanf("%d",&m[l][c]);		
		}
	}
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			if(l==c){
				sumDiag +=	m[l][c];
			}
					
		}
	}
	
	for(l=0;l<3;l++){
		for(c=0;c<3;c++){
			if(l!=c && cont==1 && l==c){
				sumSec +=	m[l][c];
			}
					
		}
	}
		
	for(l=0;l<3;l++){
		printf("\n");
		for(c=0;c<3;c++){
			printf("%d ",m[l][c]);	
		}
		printf("\t");
	}
	printf("\n");
	
	printf("sumDiag Principal: %d\n",sumDiag);
	printf("sumDiag Secundaria: %d\n",sumSec);
	printf("sumLinhas: %d\n",sumLinhas);
	printf("sumColunas: %d\n",sumColunas);
	if(sumLinhas == sumColunas && sumDiag == sumSec){
		printf("quadrado magico\n");
		
	}else printf("Quadrado nao magico\n");

	
	system("pause");
}
