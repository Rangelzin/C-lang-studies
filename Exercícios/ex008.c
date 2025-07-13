#include <stdio.h>

void main() {
    char letter;

    printf("<<< EX008 - Antecessor e Sucessor (Letras) >>>\n");
    printf("\n");

    printf("----------------------------------------------------------------\n");
    printf(" Digite uma letra: ");
    scanf(" %c", &letter);
    printf(" Antes da letra '%c' temos a letra '%c'. Depois temos a letra '%c'\n", letter, letter - 1, letter + 1);
    printf("----------------------------------------------------------------\n");
} 