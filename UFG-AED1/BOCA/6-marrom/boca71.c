#include <stdio.h>
#define MAX 10005

void troca(int* a, int* b) {
    int aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleSort(int vetor[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (vetor[j] > vetor[j + 1]) {
                troca(&vetor[j], &vetor[j + 1]);
            }
        }
    }
}

int main() {
    int n, l, k,i;
    int lMenor, kMenor;
    int numeros[MAX];

    scanf("%d", &n);
    for (i = 0; i < n; i++){
       scanf("%d", &numeros[i]);
    }
    scanf("%d %d", &l,&k);

    bubbleSort(numeros, n);

    lMenor = numeros[l-1];
    kMenor = numeros[k-1];

    printf("%d\n", lMenor + kMenor);

    return 0;
}