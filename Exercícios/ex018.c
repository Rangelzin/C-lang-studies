#include <stdio.h>
#include <time.h>

void main() {
    int anoNas;
    time_t t;
    time(&t);
    struct tm *data;

    data = localtime(&t);

    int anoAtual = data->tm_year + 1900;

    printf("<<< EX018 - Serviço Militar v1.0 >>>\n");
    printf("\n");
    printf("------------------------------------------------\n");
    printf(" Atualmente estamos no ano de %d\n", anoAtual);
    printf(" Qual foi o ano que você nasceu? ");
    scanf("%d", &anoNas);
     int idade = anoAtual - anoNas;
    printf("------------------ RESULTADO ------------------\n");
    printf(" Sua idade é %d anos\n", idade);
    if (idade >= 18) {
        printf(" Ja fez 18 anos. Espero que você tenha se alistado\n");
        printf(" SE NÃO, FAZ AGORA! NAO PERDE TEMPO GUERREIRO\n");
    } else {
        printf("Você ainda não tem 18 anos. Não pode se alistar!\n");
    }

    printf("------------------------------------------------\n");
}