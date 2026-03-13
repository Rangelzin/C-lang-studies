#include <stdio.h>

int main() {
    int N, contador,casas[4],i;

    scanf("%i", &N);
    int Numeros[N];

    while (i < N) {
        scanf("%i", &Numeros[i]);
        i++;
    }

    i = 0;
    while (i < N) {
        casas[3] = Numeros[i] % 10;
        casas[2] = (Numeros[i] / 10) % 10;
        casas[1] = (Numeros[i] / 100) % 10;
        casas[0] = (Numeros[i] / 1000) % 10;

        if (casas[0] == casas[3] && casas[2] == casas[1]) {
            printf("yes ");
        } else {
            printf("no ");
        }
        i++;
    }

    return 0;
}