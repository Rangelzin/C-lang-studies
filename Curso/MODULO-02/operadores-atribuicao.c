#include <stdio.h>

void main() {
    int a = 10;
    int b = 5;

    // Operadores de atribuição
    a += b;  // a = a + b
    printf("a += b: %d\n", a);

    a -= b;  // a = a - b
    printf("a -= b: %d\n", a);

    a *= b;  // a = a * b
    printf("a *= b: %d\n", a);

    a /= b;  // a = a / b
    printf("a /= b: %d\n", a);

    a %= b;  // a = a % b
    printf("a %%= b: %d\n", a);

    // Operador de incremento e decremento
    a++;  // Incrementa a
    printf("a++: %d\n", a);
    a--;  // Decrementa a
    printf("a--: %d\n", a);
    
}