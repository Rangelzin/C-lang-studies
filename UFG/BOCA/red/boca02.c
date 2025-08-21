#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char numeros[2][4], numeros_invertido[2][4];
    int i, j,len;

    scanf("%s %s", numeros[0], numeros[1]);

    for (i = 0; i < 2; i++) {
        len = strlen(numeros[i]);
        for (j = 0; j < len; j++) {
            numeros_invertido[i][j] = numeros[i][len - 1 - j];
        }
        numeros_invertido[i][len] = '\0';
    }

    int numero1 = atoi(numeros_invertido[0]);int numero2 = atoi(numeros_invertido[1]);
    
    if (numero1 > numero2) {
        printf("%i\n", numero1);
    } else {
        printf("%i\n", numero2);
    }

    return 0;
}
