#include<stdio.h>
#include<string.h>
main(){
	char n[16];
	int total,cont=0, i;
	printf("Digite uma palavra: ");
	gets(n);
	total = strlen(n);
	for (i=0;i<total;i++){
		if(n[i] == 'a'){
			cont++;
			printf("o caractere %s aparece %d vezes",n[i],cont);
		}
		
	}
	
		
}
