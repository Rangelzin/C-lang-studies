#include <stdio.h>

void main() {
    int n;
    float m;

    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    printf("Digite um número Real: ");
    scanf("%f", &m);

    printf("Você digitar os valores, %d inteiro e %.2f real, obrigado!\n", n,m);
}