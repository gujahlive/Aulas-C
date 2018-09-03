#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
#include<locale.h>
#include<time.h>


/*
69 - . Faça um programa que pergunte ao usuário quantos valores ele deseja
armazenar em ´ um vetor de double, depois use a função MALLOC para reservar
(alocar) o espaço de memória de acordo com o especificado pelo usuário. Esse vetor
deve ter um tamanho maior ou igual a 10 elementos. Use este vetor dinâmico como
um vetor comum, atribuindo aos 10 primeiros elementos do vetor valores aleatórios
(usando a função rand) entre 0 e 100. Exiba na tela os valores armazenados nos 10
primeiros elementos do vetor.
*/


double *pv;

void funcmalloc(int);


main(){
	setlocale(LC_ALL, "Portuguese");
	
	int n,cont;
	srand(time(NULL));
	
	do{	
		printf("Informe o tamanho de um vetor de pelo menos 10 posições: ");
		scanf("%d",&n);
	}while(n<10);
	
	funcmalloc(n);
	
	for(cont=0;cont<10;cont++){
		pv[cont]=rand()%100;
	}
	system("cls");
	//if(n>10){
		for(cont=10;cont<n;cont++){
			system("cls");
			printf("Informe um número para a posição %d:",cont+1);
			scanf("%lf",&pv[cont]);
		}
	//}
	system("cls");
	printf("Os 10 primeiros números do vetor são:\n\n");
	for(cont=0;cont<10;cont++){
		printf("%.1lf\t",pv[cont]);
	}
	printf("\n\nTodos os valores do vetor são:\n\n");
	for(cont=0;cont<n;cont++){
		printf("%.1lf\t",pv[cont]);
	}
	
	
}


funcmalloc(N){
	
	pv=(double*)malloc(N*sizeof(double));
	return 0;
}




