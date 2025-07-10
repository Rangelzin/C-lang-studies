#include <stdio.h>
#include <string.h>

void retirar_quebra(char *n) {
    int len = strlen(n);
    if (len > 0 && n[len - 1] == '\n') {
        n[len - 1] = '\0';
    }
}

void main() {
    char nome[30];
    char ender[50];

    printf("Digite seu Nome: ");
    fgets(nome, sizeof(nome), stdin);

    printf("Digite seu endereço: ");
    fgets(ender, sizeof(ender), stdin);

    retirar_quebra(nome);
    retirar_quebra(ender);

    printf("Você digitou o nome \"%s\", obrigado!\n", nome);
    printf("Você digitou o nome \"%s\", obrigado!\n", ender);
}

