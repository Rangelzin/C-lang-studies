#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    float valor1,valor2;
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX021 - Mostrar o inverso >>>\n");
    printf("\n");
    printf("\n-------------------- Inversos ------------------\n");

    printf("\n Digite um numero (positivo ou negativo): ");
    scanf("%f", &valor1);
        if (valor1 < 0) {
            valor2 = valor1 * (-1);
            printf("\n O inverso de %.0f é igual a %.0f",valor1, valor2); 
        } else {
            valor2 = 1 / valor1;
            printf("\n O inverso de %.0f é igual a %.4f",valor1, valor2); 
        }
    
    printf("\n---------------------------------------------------------\n");
} 