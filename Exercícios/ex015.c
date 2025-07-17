#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    
    float valor1, valor2, media;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX015 - Media com Mensagem >>>\n");
    printf("\n");

    printf("------------------------------------------------\n");
    printf(" Digite a primeira nota: ");
     scanf("%f", &valor1);
    printf(" Digite a segunda nota: ");
     scanf("%f", &valor2);

     media = (valor1 + valor2) / 2.0;
    
    printf("\n----------------- RESULTADO -------------------\n");
     if (media >= 7) {
        printf("\n PARABÉNS! A sua média final foi %.2f\n", media);
     }else{
        printf("\n A sua média final foi %.2f\n", media);
     };

    printf("\n-----------------------------------------------\n");
} 