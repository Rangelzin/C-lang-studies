#include <stdio.h>

void main() {
    float velocidade;
    printf("Digite a velocidade do automóvel: ");
    scanf("%f",&velocidade);

    if (velocidade > 80) {
        printf("Você foi multado!\n");
    }

    printf("Se beber, não dirija\n");
}