#include<stdio.h>
#include<math.h>
main(){
	int n1,n2,n3,q1,q2,q3,result;
	printf("N1: ");
	scanf("%d",&n1);
	printf("N2: ");
	scanf("%d",&n2);
	printf("N3: ");
	scanf("%d",&n3);
	q1 = pow(n1,2);
	q2 = pow(n2,2);
	q3 = pow(n3,2);
	result = q1 + q2 + q3;
	printf("N1: %d ao quadrado : %d\n",n1,q1);
	printf("N1: %d ao quadrado : %d\n",n2,q2);
	printf("N1: %d ao quadrado : %d\n",n3,q3);
	printf("Soma dos quadrados dos numeros: %d",result);

}
