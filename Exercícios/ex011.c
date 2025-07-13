#include <stdio.h>
#include <locale.h>


void main() {
    int num;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX011 - PAR ou IMPAR >>>\n");
    printf("\n");

    printf("----------------------------------------------------------\n");
    printf(" Digite um número qualquer: ");
    scanf("%d", &num);
    if (num % 2 == 0) {
        printf(" O número %d que você digitou é PAR.\n", num);
    } else {
        printf(" O número %d que você digitou é ÍMPAR.\n", num);
    }

    printf("----------------------------------------------------------\n");
} 