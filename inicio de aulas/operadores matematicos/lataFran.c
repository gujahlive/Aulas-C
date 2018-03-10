#include<stdio.h>
#include<math.h>
main(){
	
	float h, r, qLitros,areaC, qLatas,valorFinal;
	printf("Altura e o raio do cilindro: ");
	scanf("%f%f",&h,&r);
	areaC = 2*3.14*pow(r,2)+2*3.14*r*h;
	printf("Area do Cilindro: %f",areaC);
	qLatas = areaC / 15;
	valorFinal = qLatas * 20;
	printf("o valor final a ser pago : %f com %f latas", valorFinal,qLatas);
	
	system("pause");
}
