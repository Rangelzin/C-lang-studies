#include <stdio.h>
#include <string.h>

void main( ){
    char nome1[10];
    char nome2[10] = "Rangel";

    strcpy(nome1, "Victor "); // Guarda o nome na variável nome
    int tam = strlen(nome1); // Calcula o tamanho do nome
    int res = strcmp(nome1, nome2); // Compara os nomes
    
    printf("Muito prazer: %s\n", nome1);
    printf("Tamanho do nome: %d letras\n", tam);
    printf("Comparação: %d\n", res);
    printf("Nome junto: %s\n", strcat(nome1, nome2)); // Concatena os nomes
}