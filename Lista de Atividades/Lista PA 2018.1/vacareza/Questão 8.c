#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>

/*
8 - Determinar quanto tempo um corpo em repouso leva para atingir o solo a a partir de uma
certa altura informada pelo usuário. Considere g = -9,8 m/s^2 e que a queda livre é
determinada pela fórmula: H = Ho + VoT + (gT^2)/2
*/

main(){
	setlocale(LC_ALL, "Portuguese");
	
	float t, h;

	printf ("Informe a altura em metros: ");
	scanf ("%f", &h);
	t = (2/9.8)+(2*h/9.8);
	printf ("\n\nO corpo levara %.2f segundos para atingir o solo\n\n\n",t);
}



