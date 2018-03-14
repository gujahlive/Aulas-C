#include<stdio.h>
main(){
	int *pi,*pi2,tamInt,tamF,tamC,tamD;
	printf("%d\n%d\n",pi,pi2);
    tamInt = sizeof(int);
    tamF = sizeof(float);
    tamC = sizeof(char);
    tamD = sizeof(double);
    printf("%d",tamInt);
	printf("%d",tamF);
    printf("%d",tamC);
    printf("%d",tamD);

}
