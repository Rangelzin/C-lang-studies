#include <stdio.h>
#define P 76 

int main() {
    int ano_inicial,ano_final,result;
    int ano = 1986;
    int ano_bissexto = 1984;

    scanf("%i", &ano_inicial);
    
    if (ano_inicial >= ano) {
        while (ano < ano_inicial) ano += P;
        result = 1;
    } else {
        while (ano > ano_inicial) ano -= P;
        result = 0;
    }
    if (ano == ano_inicial || ano < ano_inicial ) ano += P;

    if (result) ano_final = ano + ((ano_bissexto - ano) / 4) / 365;
    else ano_final = ano - ((ano_bissexto - ano) / 4) / 365;

    printf("%i\n", ano_final);
    return 0;
}