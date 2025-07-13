#include <stdio.h>

void main() {
    int x = 5;
    int y = 2;
    float z = (float)x / y; // Coerção de tipo explícita
    printf("Resultado: %.1f\n", z);
}