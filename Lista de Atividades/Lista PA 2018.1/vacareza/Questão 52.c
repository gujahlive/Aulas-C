#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*

*/

int fatorial(int);

main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n, fat;

    printf("Digite n");
    scanf("%d", &n);

    fat = fatorial(2*n) / fatorial(n);

    printf("Fatorial quadruplo de %d eh: %d", n, fat);
}


fatorial(int n){
    if(n>0)
    {
        return n*fatorial(n-1);
    }
    else
    {
        return 1;
    }
}
