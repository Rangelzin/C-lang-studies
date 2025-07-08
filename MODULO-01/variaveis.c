#include <stdio.h>

void main(){
    unsigned int idade = 19;
    float peso = 70.5;
    char sexo = 'M';
    char *nome = "Rangel";

    printf("O %s do sexo %c, tem %i anos e pesa %.2fKG!\n",nome, sexo, idade,peso);
}