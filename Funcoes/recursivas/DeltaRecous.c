#include<stdio.h>
#include<math.h>
#include<locale.h>
typedef struct{
	int x1,x2;
}raizes;
raizes calculaRaizes(int, int , int );// prototipo// sem ele não roda por que ele vai achar a função no final e voltar pra verificar com a tipagem

int encontraDelta(int A, int B, int C){
	return pow(B,2) - 4 * A * C;
	
}

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
	delta = encontraDelta(a,b,c);
	roots.x1 = (-b + sqrt(delta) )/ 2*a;
	roots.x2 = -b + sqrt(delta) / 2*a;
	return roots;
}








