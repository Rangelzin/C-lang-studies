#include <stdio.h>
#define L 1000

void troca(int* a, int* b) {
    int aux;

    aux = *a;
    *a = *b;
    *b = aux;
}

int bubbleSort(int vetor[],int n) {
   int i,j,trocas=0;

   for (i = 0; i < n-1;i++){
        for (j = 0; j < n-1;j++){
           if (vetor[j] > vetor[j+1]){
              troca(&vetor[j], &vetor[j+1]);
              trocas++;
           }
        }
    }

    return trocas;
}


int main() {
    int n,i,j,caso;

    scanf("%d", &n);

    int vagoes[L],result[n];

    for (i = 0; i < n;i++){
        scanf("%d", &caso);
        for (j = 0; j < caso;j++){
            scanf("%d", &vagoes[j]);
        }
        result[i] = bubbleSort(vagoes,caso);
    }

    for (i = 0; i < n;i++){
        printf("%d\n", result[i]);
    }

}
