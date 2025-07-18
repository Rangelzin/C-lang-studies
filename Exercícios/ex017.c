#include <stdio.h>
#include <time.h>
#include <locale.h>

void main() {
    int anoNas;
    time_t t;
    time(&t);
    struct tm *data;

    data = localtime(&t);
    int anoAtual = data->tm_year + 1900;
    
    setlocale(LC_ALL, "Portuguese");

    printf("<<< EX016 - Fila do Banco >>>\n");
    printf("\n");
    printf("------------------------------------------------\n");
    printf(" Qual foi o ano que você nasceu? ");
     scanf("%d", &anoNas);
     int idade = anoAtual - anoNas;
    printf("------------------------------------------------\n");
    printf(" Você tem %d anos, certo?\n",idade );
    printf(" Seja Bem vindo(a) ao Banco Rangelzada!\n");
        if (idade >= 65) {
            printf("ATENÇÃO!!! Você tem direito a fila preferencial!!!\n");
        }
    printf("------------------------------------------------\n");
}