#include <stdio.h>

void main() {
    int n;
    printf("Digite um valor: ");
    scanf("%d", &n);
    if (n % 2 == 0) {
        printf("O valor %d é PAR\n",n);
    }
    else {
        printf("O valor %d é IMPAR\n",n);
    }

    printf("FIM\n");
}