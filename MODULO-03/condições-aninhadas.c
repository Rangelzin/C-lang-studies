#include <stdio.h>

void main() {
    int n1, n2;
    // sem simplificar
    printf("Digite o primeiro numero: ");
    scanf("%d", &n1);
    printf("Digite o segundo numero: ");
    scanf("%d", &n2);
    if (n1 > n2) {
        printf("O maior numero eh: %d\n", n1);
    } else {
        if (n1 < n2) {
            printf("O maior numero eh: %d\n", n2);
        } else {
            printf("Os numeros sao iguais\n");
        }
    }
    
    // simplificando
    if (n1 > n2) {
        printf("O maior numero eh: %d\n", n1);
    } else if (n1 < n2) {
        printf("O maior numero eh: %d\n", n2);
    } else {
        printf("Os numeros sao iguais\n");
    }
}