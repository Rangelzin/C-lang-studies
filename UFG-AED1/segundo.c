#include <stdio.h>

int main() {
    float N1, N2, N3, R;
    printf("Entre com as notas do aluno: \n");
    scanf("%f %f %f", &N1, &N2, &N3);
    R = (N1 + N2 + N3) / 3;
    if (R >= 6.0) {
        printf("APROVADO com media %.2f\n", R);
    } else printf("REPROVADO com media %.2f\n", R);
    

    return 0;
}