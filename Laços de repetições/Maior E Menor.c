#include<stdio.h>
main(){
	int num,x,i,maior,menor;
	printf("Insira: ");
	scanf("%d",&num);
	maior = num;
	menor = num;
	
	while( num=! 0){
	if( num[i] > maior){
		maior = num[i];
	} else {
		
		menor = num[i];
		
	}
	}
	printf("maior: %d - menor : %d ",maior,menor);
	
}
