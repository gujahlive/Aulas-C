#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<locale.h>
int mare (int *p,int d,int ma){
	if (d==3){
		ma=p[d];
	} 
	if (d==0){
		return ma;
	}
	if (p[d]>ma){
		ma=p[d];
	}
	return mare(p,d-1,ma);
}
main(){
	setlocale(LC_ALL, "Portuguese");
	int v[4],c;
	for (c=0;c<4;c++){
		printf("Insira um número ae man ");
		scanf("%d",&v[c]);
	}
	//int *p=v;
	int m=mare(&v,c-1,0);
	printf("O maior número é: %d",m);
}
