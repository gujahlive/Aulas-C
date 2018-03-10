#include<stdio.h>
main(){
	int m[5][5],l,c;
	for(l=0;l<5;l++){
		for(c=0;c<5;c++){
			if(l == c){
				m[l][c] = 1 ;
			} else m[l][c] = 0;
		}
	}
	printf("\t\t\t\t\tMatriz Identidade\n\n");
	for(l=0;l<5;l++){
		printf("\t\t\t\t");
		for(c=0;c<5;c++){
			printf("%d\t",m[l][c]);
		}
		printf("\n");
	}
printf("\n\n\n\n");


}
