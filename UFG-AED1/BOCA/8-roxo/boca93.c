#include <stdio.h>

int main() {
    double numeros[4], aux;
    int i, j;

    for (i = 0; i < 4; i++) {
        scanf("%lf", &numeros[i]);
    }

    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3 - i; j++) {
            if (numeros[j] > numeros[j + 1]) {
                aux = numeros[j];
                numeros[j] = numeros[j + 1];
                numeros[j + 1] = aux;
            }
        }
    }
    
     for (i = 0; i < 4; i++) {
        printf("%.2lf", numeros[i]);
        if (i < 3) printf(", ");
    }
    printf("\n");

    return 0;
}