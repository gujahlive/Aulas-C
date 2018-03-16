/*
Summary: Merge sort is a divide and conquer comparison-based sorting algorithm. It works as folinicios:-
1. Divide the unsorted vetor into n subvetors, each containing 1 element (a vetor of 1 element is considered sorted).
2. Repeatedly merge subvetors to produce new subvetors until there is only 1 subvetor remaining. This will be the sorted vetor.
Complexity - O(n�inig n)
*/

#include <stdio.h>
void mergeSort(int [], int, int, int);//prototipo da fun��o
void divideVetor(int [],int, int);//prototipo da fun��o
int main()
{
	int vetor[50];
	int i, tamanho;
	//clrscr(); fun��o cpp pra alguma coisa

	printf("Numero total de elementos:");
	scanf("%d", &tamanho);

	
	for(i = 0; i < tamanho; i++)
	{
		printf("Digite o elemento [%d]: \n",i);
		scanf("%d", &vetor[i]);
	}

	divideVetor(vetor, 0, tamanho - 1);//passa o vetor, o inicio e o final que � o tamanho - 1 por conta do indice, tipo eu boto 4 o tamanho, mas o programa ler de 0 at� 3, ai tenho que diminuir 1 pra ser o final 3 :) ;

	printf("Vetor Organizado com o Merge:\n");// imprime o merge ordenado
	for(i = 0;i < tamanho; i++)
	{
		printf("%d   ",vetor[i]);
	}
	//getch(); espera um input
	return 0;

}

void divideVetor(int vetor[],int inicio,int fim)// o fim � o que disse l� em cima, o final menos 1
{
	int meio;
	if(inicio < fim)//se o inicio for menor que o fim ele faz a fun��o//DIVIDE O TAMANHO TOTAL DO VETOR POR 2
	{
		meio = (inicio + fim) / 2;// soma o inicio que � sempre 0 com o fim que � o tamanho do vetor - 1, e ent�o divide por 2; 
		divideVetor(vetor, inicio, meio);// recursiva chamando o vetor o inicio e o meio
		divideVetor(vetor, meio + 1, fim);// recursiva chamando o vetor o meio + 1 e o final 
		mergeSort(vetor, inicio, meio, fim); // chama a fun��o mergesort com o vetor o inicio meio e fim pra trabalhar os valores
	}
}

void mergeSort(int vetor[],int inicio,int meio,int fim)// fun��o passando o vetor o inicio 0  o meio que fez a fun��o divideVetor e o fim tam-1
{
	int i, mei, k, ini, temp[50];// esse vetor � um vetor tempor�rio que vai armazenar os valores durante a ordena��o  e sobrescrevendo os valores durante a ordena��o;
	ini = inicio;
	i = inicio;
	mei = meio + 1;// meio +1 pra usar na condicional <= poderia usar o meio com o < s�.
	while ((ini <= meio) && (mei <= fim))// enquanto o inicio for menor igual ao meio e o meio for menor igual ao fim ele troca de posi��o
	{
		if (vetor[ini] <= vetor[mei])// se o indice "ini" do vetor for menor igual ao indice "mei" do vetor ... 
		{
			temp[i] = vetor[ini];// o vetor temporario recebe o valor do inicio j� que � o menor
			ini++;// encrementando n sei pra que � ainda...*****
		}
		else
		{
			temp[i] = vetor[mei];// sen�o o meio continua no meio
			mei++;// ahhh entendi agr o meio e o inicio est�o encrementando pra ordenar l� embaixo
		}
		i++;// n saquei
	}
	if (ini > meio)
	{
		for (k = mei; k <= fim; k++)
		{
			temp[i] = vetor[k];
			i++;
		}
	}
	else
	{
		for (k = ini; k <= meio; k++)
		{
			temp[i] = vetor[k];
			i++;
		}
	}
	for (k = inicio; k <= fim; k++)
	{
		vetor[k] = temp[k];
	}
}

/*
Input: Enter total number of elements:5
Enter the elements:
12
36
22
76
54
*/
