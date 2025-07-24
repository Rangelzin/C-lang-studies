#include <stdio.h>
#include <time.h>

void main() {
    int anoNas;
    time_t t;
    time(&t);
    struct tm *data;

    data = localtime(&t);

    int anoAtual = data->tm_year + 1900;

    printf("<<< EX025 - Serviço Militar v2.0 >>>\n");
    printf("\n");
    printf("------------------------------------------------\n");
    printf(" Atualmente estamos no ano de %d\n", anoAtual);
    printf(" Qual foi o ano que você nasceu? ");
    scanf("%d", &anoNas);
     int idade = anoAtual - anoNas;
    printf("------------------ RESULTADO ------------------\n");
    printf(" Sua idade é %d anos\n", idade);
    if (idade > 18) {
        printf(" Seu alistamento foi em %d. Já se passou %d anos.\n", anoNas + 18, idade - 18);
    } else if (idade == 18) {
        printf(" Você completou 18 anos este ano. É hora de se alistar!\n");
    } else {
       printf(" Seu alistamento será em %d. ainda falta %d anos.\n", anoNas + 18, 18 - idade);
    }

    printf("------------------------------------------------\n");
} 