#include<stdio.h>
int superfat(int y){
	if (y == 1){
		return 1;
	} 
	return fat(y) * superfat(y - 1);

}
int fat (int x){
	int result;
	if(x == 1){
		return 1;
	} else result = x * fat(x-1);
	
	return result;
}


main(){
	int numero, r,sf;
	printf("Digite: ");
	scanf("%d",&numero);
	r = fat(numero);
	sf = superfat(numero);
	printf("O fatorial de %d é %d\n",numero,r);
	printf("SuperFat: %d",sf);
	
}
