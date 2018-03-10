#include<stdio.h>
main(){
	//Conversão R = G * pi /180, G = angulo em graus e R = radianos//
	//Deve-se manter a ordem dos elementos, por exemplo, se vier multiplicação primeiro e depois divisão, 
	//você deve resolver primeiro a multiplicação, e vice-versa. E depois de resolver todas as divisões e multiplicações, você resolve as adições e subtrações.
	float g,r,mult;
	printf("Angulo: ");
	scanf("%f",&g);
	mult = g * 3.14;
	r = mult /180;
	printf("Radiano: %.2f",r);
}
