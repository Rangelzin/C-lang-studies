#include <stdio.h>

int main() {
    int num, i = 2, contador = 1;
    int digitos[4];

    scanf("%i", &num);

    while (i >= 0) {
        digitos[i] = (num / contador) % 10;
        contador *= 10;
        i--;
    }
    digitos[3] = (digitos[0] + (digitos[1] * 3) + (digitos[2] * 5)) % 7;

    printf("O NOVO NUMERO E = ");
    for (i = 0; i <= 3; i++) {
        printf("%i", digitos[i]);
    }
    printf("\n");

    return 0;
}