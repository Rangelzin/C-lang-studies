#include <stdio.h>

void main() {
    int a = 5, b = 10;
    int resultado;

    // Operadores lógicos
    resultado = (a < b) && (b > 0); // AND lógico
    printf("Resultado de (a < b) && (b > 0): %d\n", resultado);

    resultado = (a > b) || (b > 0); // OR lógico
    printf("Resultado de (a > b) || (b > 0): %d\n", resultado);

    resultado = !(a == b); // NOT lógico
    printf("Resultado de !(a == b): %d\n", resultado);
}