#include <stdio.h>
#include <string.h>

int main() {
    char str_num1[41], str_num2[41],resultados_finais[50][83];
    int num1[41], num2[41], resultado[82];
    int len1, len2, i, j,t,k,caso_atual,idx_final;

    scanf("%d", &t);

    for (caso_atual = 0; caso_atual < t; caso_atual++) {
        scanf("%s %s", str_num1, str_num2);

        if (strcmp(str_num1, "0") == 0 || strcmp(str_num2, "0") == 0) {
            strcpy(resultados_finais[caso_atual], "0");
            continue;
        }
        
        memset(resultado, 0, sizeof(resultado));

        len1 = strlen(str_num1);
        len2 = strlen(str_num2);

        for (i = 0; i < len1; i++) num1[i] = str_num1[len1 - 1 - i] - '0';
        for (i = 0; i < len2; i++) num2[i] = str_num2[len2 - 1 - i] - '0';

        for (i = 0; i < len1; i++) {
            for (j = 0; j < len2; j++) {
                resultado[i + j] += num1[i] * num2[j];
            }
        }

        for (i = 0; i < len1 + len2; i++) {
            if (resultado[i] >= 10) {
                resultado[i + 1] += resultado[i] / 10;
                resultado[i] %= 10;
            }
        }
       
     
        idx_final = len1 + len2;
        while (idx_final > 0 && resultado[idx_final] == 0) {
            idx_final--;
        }

        k = 0;
        for (i = idx_final; i >= 0; i--) {
            resultados_finais[caso_atual][k] = resultado[i] + '0';
            k++;
        }
        resultados_finais[caso_atual][k] = '\0';
    }

    for (i = 0; i < t; i++) {
        printf("%s\n", resultados_finais[i]);
    }

    return 0;
}