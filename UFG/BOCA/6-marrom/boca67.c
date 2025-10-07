#include <stdio.h>
#define L 100

void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleSortCrescente(int vetor[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                troca(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

void bubbleSortDecrescente(int vetor[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (vetor[j] < vetor[j + 1]) {
                troca(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    int n, i, pares[L], impares[L], countPar = 0, countImpar = 0;

    scanf("%d", &n);
    int input[n];

    for (i = 0; i < n; i++) {
        scanf("%d", &input[i]);
    }

    for (i = 0; i < n; i++) {
        if (input[i] % 2 == 0) {
            pares[countPar++] = input[i];
        } else {
            impares[countImpar++] = input[i];
        }
    }

    bubbleSortCrescente(pares, countPar);

    bubbleSortDecrescente(impares, countImpar);

    if (countPar > 0) {
        for (i = 0; i < countPar; i++) {
            printf("%d", pares[i]);
            if (i < countPar - 1) printf(" ");
        }
        printf("\n");
    }

    if (countImpar > 0) {
        for (i = 0; i < countImpar; i++) {
            printf("%d", impares[i]);
            if (i < countImpar - 1) printf(" ");
        }
        printf("\n");
    }

    return 0;
}
