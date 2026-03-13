#include <stdio.h>

int main() {
    int N,i,contagem=0;
    scanf("%d", &N);

    int div[N+1];

    for (i = 0; i <= N; i++)
        div[i] = 0;

    for (i = 1; i < N; i++){
        if (N % i == 0 && div[N / i] == 0 ) {
            div[i]++;
            div[N / i]++;
        }
    }

    printf("%d = ", N);
    for (i = 0; i <= N/2; i++){
        if (div[i] != 0) {
            if (i != N/2)
                printf("%d + ", i);
            else printf("%d = ", i);
            contagem += i;
        }
    }
    
    if (contagem == N)
        printf("%d (NUMERO PERFEITO)\n", contagem);
    else printf("%d (NUMERO NAO E PERFEITO)\n", contagem);

    return 0;
}