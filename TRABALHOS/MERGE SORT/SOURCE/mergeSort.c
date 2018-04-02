//Comando para compilar o código gcc mergeSort.c -o merge -lm
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<locale.h>

//PROTOTIPOS DAS FUNÇÕES
void mergeSort(int* vetor, int inicio, int fim); // prototipo da fun��o
int merge(int* vetor, int inicio, int meio, int fim); // prototipo da fun��o
//------------------------------------------------

int main(void) {
	setlocale(LC_ALL,"Portuguese");
    //VETOR ORGANIZADO EM ORDEM DECRESCENTE
    int vetorPior[] = {10,9,8,7,6,5,4,3,2,1};
    //VETOR ORGANIZADO DE FORMA ALEATORIA
    int vetorMedio[] = {1,2,3,4,5,10,9,8,7,6};
    //VETOR ORGALIZADO DE FORMA CRESCENTE
    int vetorMelhor[] = {1,2,3,4,5,6,7,8,9,10};

    //IMPRIME TODOS OS VALORES ANTES DA ORDENAÇÃO
    printf("\nVetor antes da ordena��o\n");
    int i;
    for(i = 0; i < 10; i++){
        printf("%d ", vetorPior[i]);
    }
    printf("\n");
    //-------------------------------------------

    //FUNÇÃO PARA ORDENAR O VETOR.
    //O PRIMEIRO ARGUMENTO É O VETOR O SEGUNDO A POSIÇÃO INICIAL E O TERCEIRO É A POSIÇÃO FINAL
    mergeSort(vetorPior, 0, 9);
    //---------------------------------------------

    //IMPRIME O VETOR DEPOIS DE ORGANIZADO
    printf("Vetor depois da ordena��o\n");
    for(i = 0; i < 10; i++){
        printf("%d ", vetorPior[i]);
    }
    printf("\n");
    //----------------------------------------

    //return 0;
}

void mergeSort(int* vetor, int inicio, int fim) {
    int meio;

    if(inicio < fim){
        //DIVIDE O TAMANHO TOTAL DO VETOR POR 2
        meio = floor((inicio + fim) / 2);
        //FUNÇÃO RECURSIVA PARA DIVIDIR AS DUAS METADES AT� RESTAREM S� VETORES COM 1 POSI��O
        mergeSort(vetor, inicio, meio);//recursiva chamando os elementos
        mergeSort(vetor, meio + 1, fim);//
        //---------------------------------------------------------------------
        //COMBINA AS DUAS METADES DE FORMA ORDENADA
        merge(vetor, inicio, meio, fim);
    }
}

int merge(int* vetor, int inicio, int meio, int fim) {//o valor do vetor que � 10 inicio, meio e fim.
    int *vetorAux, p1, p2, tamanho, i, j, k;
    //VARIÁVEIS PARA CONTROLAR O FINAL DOS VETORES
    int fim1 = 0, fim2 = 0;
    //-------------------------------------------
    tamanho = fim - inicio + 1;
    //VARIAVEIS PARA CONTROLAR OS ELEMENTOS DOS DOIS VETORES
    p1 = inicio;
    p2 =  meio + 1;
    //---------------------------------------------------

    //VETOR AUXILIAR CRIADO DE FORMA DINAMICA
    vetorAux = (int*)  malloc(tamanho * sizeof(int));//cast, uma convers�o

    if(vetorAux != NULL){
        for(i = 0; i < tamanho; i++) {
            //VERIFICA SE ALGUM DOS VETORES ACABOU PARA CONTINUAR COMPARANDO AS POSIÇÕES
            if(!fim1 && !fim2) {
                if(vetor[p1] < vetor[p2])
                    vetorAux[i] = vetor[p1++];// copia o valor pro vetor auxiliar e soma mais um 
                else
                    vetorAux[i] = vetor[p2++];// copia o valor pro vetor auxiliar e soma mais um

                //VERIFICA SE ALGUM DOS VETORES ACABOU
                if(p1 > meio)
                    fim1 = 1;//se um dos vetores acabou, n�o precisa copiar s� complementar
                if(p2 > fim)
                    fim2 = 1;
                //--------------------------------
            }else{
                //SE A PRIMEIRA METADE DO VETOR ACABOU A SEGUNDA É MOVIDA PARA O VETOR AUXILIAR
                //SEM SEM COMPARADA
                if(!fim1)
                    vetorAux[i] = vetor[p1++];
                else
                    vetorAux[i] = vetor[p2++];
            }

        }
        //COPIA OS VALORES DO VETOR AUXILIAR PARA O ORIGINAL
        for(j = 0, k = inicio; j < tamanho; j++, k++){
            vetor[k] = vetorAux[j];
        }
        //---------------------------------------------
    }
    //free(vetorAux);

}
