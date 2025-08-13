#include <stdio.h>
#include <string.h>
#include <locale.h>

void retirar_quebra(char *n) {
    int len = strlen(n);
    if (len > 0 && n[len - 1] == '\n') {
        n[len - 1] = '\0';
    }
}

void main() {
    char nome[100];
    float nota1, nota2, media;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX009 - Média do Aluno >>>\n");
    printf("\n");

    printf("-------------------------------------------\n");
    printf("  Nome do Aluno: ");
     fgets(nome, sizeof(nome), stdin);
     retirar_quebra(nome);
    printf("  Nota 1: ");
     scanf("%f", &nota1);
    printf("  Nota 2: ");
     scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("\n");
    printf(" O aluno %s tirou as notas %.1f e %.1f.\n", nome, nota1, nota2);
    printf(" A média final foi de %.1f.\n", media);
    printf("-------------------------------------------\n");
} 