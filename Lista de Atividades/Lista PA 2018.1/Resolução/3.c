#include<stdio.h>
main(){
	//Convers�o R = G * pi /180, G = angulo em graus e R = radianos//
	//Deve-se manter a ordem dos elementos, por exemplo, se vier multiplica��o primeiro e depois divis�o, 
	//voc� deve resolver primeiro a multiplica��o, e vice-versa. E depois de resolver todas as divis�es e multiplica��es, voc� resolve as adi��es e subtra��es.
	float g,r,mult;
	printf("Angulo: ");
	scanf("%f",&g);
	mult = g * 3.14;
	r = mult /180;
	printf("Radiano: %.2f",r);
}
