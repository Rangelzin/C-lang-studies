#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <locale.h>

void main() {
    setlocale(LC_ALL, "Portuguese");
    srand(time(NULL));
    int n = rand() % 5 + 1;
    int m;

    // Menu Superior
    printf("<<< EX005 - Será que você acerta? >>>\n");
    printf("\n");

    printf("--------------------------------------------------------\n");
    printf("Estou pensando em um número entre 0 e 5. Tente Advinhar!\n");
    printf("Qual seu palpite? ");
    scanf("%d", &m);
    printf("Eu pensei no número %d e você pensou no número %d\n", n,m);
    printf("--------------------------------------------------------\n");
    
}