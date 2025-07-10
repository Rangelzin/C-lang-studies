#include <stdio.h>
#include <string.h>
#include <locale.h>

void retirar_quebra(char *n) {
    int len = strlen(n);
    if (len > 0 && n[len - 1] == '\n'){
        n[len - 1] = '\0';
    }
}

void main() {
    setlocale(LC_ALL, "Portuguese");
    char nome[100];
    int idade;
    float peso;

    // Menu Superior
    printf("<<< EX003 - Dados >>>\n");
    printf("\n");

    // Coleta de Dados
    printf("Qual é seu nome? ");
        fgets(nome, sizeof(nome), stdin);
        retirar_quebra(nome);
    printf("Quantos anos você tem? ");
        scanf("%d", &idade);
    printf("Qual é seu peso? (Kg) ");
        scanf("%f", &peso);
    printf("\n");

    // Menu Inferior
    printf("-------<<< PROCESSANDO >>>-------\n");
    printf("Seu nome é %s\nVocê tem %d anos\nPesa %.2f Kg\n", nome, idade, peso);
    printf("FIM!\n");

}