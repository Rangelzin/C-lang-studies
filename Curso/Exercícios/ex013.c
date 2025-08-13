#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    int valor1, valor2,resultado1, resultado2, resultado3;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX013 - Operadores Bitwise >>>\n");
    printf("\n");

    printf("------------------------------------------------\n");
    printf(" Digite o primeiro valor: ");
     scanf("%d", &valor1);
    printf(" Digite o segundo valor: ");
     scanf("%d", &valor2);

     resultado1 = valor1 & valor2;
     resultado2 = valor1 | valor2;
     resultado3 = valor1 ^ valor2;

     printf("\n---------------OPERACOES BIWISE-----------------\n");
     printf("\n");
     printf("Calculando %d & %d é igual a %d\n", valor1, valor2, resultado1);
     printf("Calculando %d | %d é igual a %d\n", valor1, valor2, resultado2);
     printf("Calculando %d ^ %d é igual a %d\n", valor1, valor2, resultado3);

     printf("------------------------------------------------\n");
} 