#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <locale.h>



/*
59 - Os números de Catalan são definidos pela seguinte recursão
Alguns números desta sequência são: 1, 1, 2, 5, 14, 42, 132, 429, 1430, 
4862, 16796, 58786... Faça uma função recursiva que receba um número N e 
retorne o N-ésimo número de Catalan.
*/



int catalan(int n) {
	if(n == 0) {
		return 1;
	}
	return 2 * (2 * n - 1) * catalan(n - 1) / (n + 1);
}


main(){
	
	setlocale(LC_ALL,"Portuguese");
	
	printf("%d",catalan(4));
}
