#include<stdio.h>
#include<stdlib.h>
main() {
	
	int n,maior,menor;
	
	printf("digite os valores:");
	scanf("%d",&n);
	maior=n;
	menor=n;
	while(n!=0){
		
			if(n>maior) {
				maior=n;
			}
				if(n<menor){
				menor=n;
				} 
				
			printf("digite os valores:");
			scanf("%d",&n);	
	}

	printf("O maior numero digitado :%d\n",maior);
	printf("O menor numero digitado :%d\n",menor);
	system("Pause");
}
