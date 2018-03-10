#include<stdio.h>
main(){
	int   l,c,m[4][4];
	float sum=0, media=0;
	for (l=0 ; l<4 ; l++){
		for (c=0 ; c<4 ; c++){
			scanf("%d",&m[l][c]);
		
		}
	}
	for (l=0 ; l<4 ; l++){
		for (c=0 ; c<4 ; c++){
			if (l == c ){
				sum += m[l][c] ;
			}
		}
	}
	media = sum / 4;
	printf("\n");
	for (l=0 ; l<4 ; l++){
		for (c=0 ; c<4 ; c++){
			printf("%d\t",m[l][c]);
		}
	printf("\n");
	}
	
	printf("\nsoma da diagonal principal: %.2f\nMedia da diagonal Principal: %.2f",sum,media);
		
	
	
	
}
