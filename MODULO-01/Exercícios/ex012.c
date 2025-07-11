#include <stdio.h>
#include <string.h>
#include <locale.h>


void main() {
    float nota1, nota2, media;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX012 - APROVADO ou REPROVADO >>>\n");
    printf("\n");

    printf("------------------------------------------------\n");
    printf(" Primeira Nota: ");
     scanf("%f", &nota1);
    printf(" Segunda Nota: ");
     scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;
    printf("\n");
    printf(" Com as notas %.1f e %.1f, o aluno tem média %.1f.\n", nota1, nota2,media);
    media >= 6.0 ? 
        printf(" A sua situação é APROVADO.\n") : 
        printf(" A sua situação é REPROVADO.\n");

    printf("------------------------------------------------\n");
} 