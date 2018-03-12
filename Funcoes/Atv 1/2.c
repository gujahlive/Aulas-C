#include<stdio.h>
#include<math.h>
/*
delta = b² - 4.a.c;
delta = 2² - 4.3.4;
delta = 4 - 48;
delta = 44;



*/
float Equa(float a1,float b1, float c1){
	float equa, resultB,resultMult,ResultTudo;
	resultB = pow(b1,2);
	resultMult = 4 * a1 * c1;
	ResultTudo = resultB - resultMult;
	equa = ResultTudo;
	return equa;
}


main(){
	float a,b,c,resultB,FinalResult;
	printf("Valor de A: ");
	scanf("%f",&a);
	printf("Valor de B: ");
	scanf("%f",&b);
	printf("Valor de C: ");
	scanf("%f",&c);
    FinalResult = Equa(a,b,c);
	printf("delta : %.2f",FinalResult);
	
	
	
}
