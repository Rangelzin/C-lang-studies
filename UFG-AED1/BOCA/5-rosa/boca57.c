#include <stdio.h>

#define MAXN 1005

int main() {
    int qtdCAFE, qtdDAYS;
    int i, j;
    int precoCAFE[MAXN];
    int valdd[MAXN];     
    int coinCAFE[MAXN];

    if (scanf("%d", &qtdCAFE) != 1) return 0;
    for (i = 0; i < qtdCAFE; i++) {
        scanf("%d", &precoCAFE[i]);
    }

    scanf("%d", &qtdDAYS);
    for (i = 0; i < qtdDAYS; i++) {
        scanf("%d", &coinCAFE[i]);
    }

    for (i = 0; i < qtdDAYS; i++) {
        valdd[0] = 0;
        for (j = 0; j < qtdCAFE; j++) {
            if (coinCAFE[i] >= precoCAFE[j]) {
                valdd[0]++;
                valdd[j+1] = 1;
            } else {
                valdd[j+1] = 0;
            }
        }

        printf("%d", valdd[0]);
        for (j = 1; j <= qtdCAFE; j++) {
            if (valdd[j]) printf(" %d", j);
        }
        printf("\n");
    }

    return 0;
}
