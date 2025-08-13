#include <stdio.h>

void main() {
    char r;
    char s;

    printf("Digite uma letra: ");
    r = getchar();
    while (getchar() != '\n'); // Limpa o buffer de entrada

    printf("Digite outra letra: ");
    s = getchar();
    while (getchar() != '\n'); // Limpa o buffer de entrada

    printf("Você digitou as letras \"%c\" e \"%c\", obrigado!\n", r, s);
}