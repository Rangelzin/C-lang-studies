#include <stdio.h>
#define MAX 1000

void swap(int* elemento_a, int* elemento_b) {
    int temp = *elemento_a;
    *elemento_a = *elemento_b;
    *elemento_b = temp;
}

int selectionSort(int array[], int tamanho) {
    int trocas = 0,indice_do_menor,i,j;

    for (i = 0; i < tamanho - 1; i++) {
        indice_do_menor = i;
        for (j = i + 1; j < tamanho; j++) {
            if (array[j] < array[indice_do_menor]) {
                indice_do_menor = j;
            }
        }
        if (indice_do_menor != i) {
            swap(&array[indice_do_menor], &array[i]);
            trocas++;
        }
    }
    return trocas;
}

int insertionSort(int array[], int tamanho) {
    int movimentos = 0,elemento_chave,j,i;
    for (i = 1; i < tamanho; i++) {
        elemento_chave = array[i];
        j = i - 1;

        while (j >= 0 && array[j] > elemento_chave) {
            array[j + 1] = array[j];
            j = j - 1;
            movimentos++; 
        }
        array[j + 1] = elemento_chave;
    
        movimentos++; 
    }
    return movimentos;
}

int main() {
    int N,i,aux;
    int vetorInsertion[MAX]={0},vetorSelection[MAX]={0};
    int trocaInsertion, trocaSelection;

    scanf("%d", &N);
    for (i = 0; i < N; i++){
        scanf("%d", &aux);
        vetorInsertion[i] = aux;
        vetorSelection[i] = aux;
    }

    trocaInsertion = insertionSort(vetorInsertion, N);
    trocaSelection = selectionSort(vetorSelection, N);

    printf("%d\n",trocaInsertion-trocaSelection);

    return 0;
}