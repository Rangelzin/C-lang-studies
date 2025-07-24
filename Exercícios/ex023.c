#include <stdio.h>

void main() {
    int numero;

    printf("<<< EX023 - Positivo ou Negativo?? >>>\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf(" Digite um número: ");
    scanf("%d", &numero);
    if (numero > 0){
        printf(" O número %d é POSITIVO!\n", numero);
    } else if (numero < 0) {
        printf(" O número %d é NEGATIVO!\n", numero);
    } else {
        printf(" O número é NULO!\n");
    }
    printf("---------------------------------------\n");
}
