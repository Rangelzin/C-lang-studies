#include <stdio.h>
#define VAL10 10
#define VAL5 5

int main() {
    int N;
    float preco=0;

    scanf("%i", &N);

    preco = ((N/3) * VAL10) + ((N - ((N/3) * 3)) * VAL5);

    printf("O VALOR A PAGAR E = %.2f\n", preco);
}