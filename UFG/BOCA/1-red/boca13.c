#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_DIGITOS 50

void inverterString(char *str) {
    int i = 0;
    int j = strlen(str) - 1;
    char temp;
    while (i < j) {
        temp = str[i];
        str[i] = str[j];
        str[j] = temp;
        i++;
        j--;
    }
}

void somarStrings(char *resultado, const char *num1, const char *num2) {
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int i = 0, j = 0, k = 0;
    int carry = 0, soma;

    while (i < len1 || j < len2 || carry) {
        soma = carry;
        if (i < len1) {
            soma += num1[len1 - 1 - i] - '0';
            i++;
        }
        if (j < len2) {
            soma += num2[len2 - 1 - j] - '0';
            j++;
        }
        resultado[k++] = (soma % 10) + '0';
        carry = soma / 10;
    }
    resultado[k] = '\0';
    inverterString(resultado);
}

int main() {
    int i, k, n_max=0;

    scanf("%d", &k);
    int valoresN[k];
    for (i = 0; i < k; i++){
        scanf("%d", &valoresN[i]);
        if (valoresN[i] > n_max)
            n_max = valoresN[i];
    }

    char resultados[n_max + 1][MAX_DIGITOS];
    strcpy(resultados[0], "0");
    strcpy(resultados[1], "1");

    for (i = 2; i <= n_max; i++){
        somarStrings(resultados[i], resultados[i - 1], resultados[i - 2]);
    }

    for (i = 0; i < k; i++){
        printf("%s\n", resultados[valoresN[i]]);
    }

    return 0;
}
