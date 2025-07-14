#include <stdio.h>
#include <string.h>

void main( ){
    float media = 5.5;
    char sit[20];

    strcpy(sit, (media >= 6.0) ? "Aprovado" : "Reprovado");
    printf("Situação: %s\n", sit);
}