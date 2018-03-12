#include<stdio.h>
#include<math.h>
#include<locale.h>
typedef struct{
	int x1,x2;
}raizes;
raizes calculaRaizes(int, int , int );// prototipo

main(){
	raizes r;
//	int xlinha,x2linhas;
	int q,w,e;
	scanf("%d%d%d",&q,&w,&e);
	r = calculaRaizes(q,w,e);
	printf("X' é: %d e X'' é: %d",r.x1,r.x2);
	
}
raizes calculaRaizes(int a, int b, int c){
	int delta;
	raizes  roots;
	delta = pow(b,2) - 4 * a * c;
	roots.x1 = -b + sqrt(delta) / 2*a;
	roots.x2 = -b + sqrt(delta) / 2*a;
	return roots;
}








