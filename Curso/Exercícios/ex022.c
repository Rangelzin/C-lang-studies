#include <stdio.h>
#include <time.h>

void main() {
    int horario = 13;
    float preço = 20;
    float dinheiro;
    time_t t;
    time(&t);

    struct tm *data;
    data = localtime(&t);
    int horaAtual = data->tm_hour;

    printf("<<< EX022 - Dá pra ver o filme? >>>\n");
    printf("\n");
    printf("================= CINEMA RANGELZERA ================\n");
    printf(" HORÁRIO DO FILME: %dh - PREÇO DO INGRESSO: R$%.2f\n", horario,preço);
    printf("====================================================\n");
    printf(" Quanto de dinheiro você tem? R$");
    scanf("%f", &dinheiro);
    printf(" Agora são %d horas.\n", horaAtual);
    if (horaAtual > horario) {
        printf(" O filme ja começou você não consegue comprar mais!\n");
    } else {   
        if (dinheiro >= preço ) {
            printf(" Você consegue comprar o ingresso!\n");
        } else {
            printf(" Infelizmente,você não consegue comprar o ingresso!\n");
        }
    }

   
    printf("----------------------------------------------------\n");
}
