#include <stdio.h>

int main() {
    int N,i,j,contagem=0;
    scanf("%d", &N);

    contagem = N;
    for (i = 1; i <= 8; i++) {
        for (j = 1; j <= 8; j++) {
            if (i == 1 && j == 1)
                j = 2;
            if (i % 2 ==0) {
                if (j % 2 == 0) {
                    contagem += N * 2;
                } else {
                    contagem += N;
                }
            } else {
                if (j % 2 == 0) {
                    contagem += N;
                } else {
                    contagem += N * 2;
                }
            }
        }
    }

    printf("%d\n", contagem);

    return 0;
}