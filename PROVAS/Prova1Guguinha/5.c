#include<stdio.h>
main(){
	int n,sum=0,multX=1,multY=1,i;
	printf("Digite a quantidade de elementos do vetor: ");
	scanf("%d",&n);
	int x[n],y[n];
	for(i=0; i<n ; i++){
		printf("Povoe o vetor x[%d]: ",i);
		scanf("%d",&x[i]);
		printf("Povoe o vetor y[%d]: ",i);
		scanf("%d",&y[i]);
		multX*= x[i];
		multY*= y[i];
		
	}
	for(i=0; i<n ; i++){
		printf("x[%d] %d\n",i,x[i]);
		printf("y[%d] %d\n",i,y[i]);
		
	}
	sum = multX + multY;
	printf("MultX: %d MultY: %d\n",multX,multY);
	printf("O produto escalar eh: %d\n",sum);
	
	
	system("pause");
}
