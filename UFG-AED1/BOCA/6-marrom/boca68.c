#include <stdio.h>
#define L 1000

void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleSort(int vetor[], int n){
    int i, j;

    for( i = 0; i < n-1; i++){
        for( j = 0; j < n-1; j++){
            if (vetor[j] > vetor[j+1])
                troca(&vetor[j], &vetor[j + 1]);
        }
    } 
}

int main() {
    int nc, i, j;
    int caso[L] = {0}, ordenado[L][L] = {0};

    scanf("%d", &nc);

    for (i = 0; i < nc; i++){
        scanf("%d", &caso[i]);
        for (j = 0; j < caso[i]; j++){
            scanf("%d", &ordenado[i][j]);
        }
        bubbleSort(ordenado[i],caso[i]);
    }

    for (i = 0; i < nc; i++){
        for (j = 0; j < caso[i]-1; j++){
            printf("%d ", ordenado[i][j]);
        }
        printf("%d\n", ordenado[i][j]);
    }

    return 0;
}