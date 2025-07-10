#include <stdio.h>
#include <string.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");
    char nome1[100],nome2[100],nome3[100];
    char sexo1, sexo2, sexo3;
    float nota1, nota2, nota3;


    // Menu Superior
    printf("<<< EX004 - Listagem >>>\n");
    printf("\n");

    // Coleta de Dados
    printf("Cadastrando a primeira pessoa\n");
    printf("-----------------------------\n");
    printf("NOME: ");
        fgets(nome1, sizeof(nome1), stdin);
        nome1[strcspn(nome1, "\n")] = 0; 
    printf("SEXO (M/F): ");
        scanf(" %c", &sexo1);
        while(getchar() != '\n'); 
    printf("NOTA: ");
        scanf(" %f", &nota1);
        while(getchar() != '\n'); 
    printf("\n");

    printf("Cadastrando a segunda pessoa\n");
    printf("-----------------------------\n");
    printf("NOME: ");
        fgets(nome2, sizeof(nome2), stdin);
        nome2[strcspn(nome2, "\n")] = 0; 
    printf("SEXO (M/F): ");
        scanf(" %c", &sexo2);
        while(getchar() != '\n'); 
    printf("NOTA: ");
        scanf(" %f", &nota2);
        while(getchar() != '\n'); 
    printf("\n");

    printf("Cadastrando a terceira pessoa\n");
    printf("-----------------------------\n");
    printf("NOME: ");
        fgets(nome3, sizeof(nome3), stdin);
        nome3[strcspn(nome3, "\n")] = 0; 
    printf("SEXO (M/F): ");
        scanf(" %c", &sexo3);
        while(getchar() != '\n'); 
    printf("NOTA: ");
        scanf(" %f", &nota3);
        while(getchar() != '\n'); 
    printf("\n");

    // Menu Inferior
    printf("Listagem Completa\n");
    printf("-----------------------------\n");
    printf("NOME\t\tSEXO\tNOTA\n");
    printf("%-8s\t%3c\t%2.1f\n", nome1, sexo1, nota1);
    printf("%-8s\t%3c\t%2.1f\n", nome2, sexo2, nota2);
    printf("%-8s\t%3c\t%2.1f\n", nome3, sexo3, nota3);
    printf("-----------------------------\n");
}
