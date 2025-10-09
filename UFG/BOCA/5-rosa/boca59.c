#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main() {
    int T, t;
    int n, k;
    int i, j, d, pos;
    int totalPresos,ladraoUsado[N];;

    char M[N][N];

    scanf("%d", &T);

    for (t = 0; t < T; t++) {
        scanf("%d %d", &n, &k);

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                scanf(" %c", &M[i][j]);
            }
        }

        totalPresos = 0;

        for (i = 0; i < n; i++) {
            for (j = 0; j < n; j++) {
                ladraoUsado[j] = 0;
            }

            for (j = 0; j < n; j++) {
                if (M[i][j] == 'P') {
                    for (d = -k; d <= k; d++) {
                        pos = j + d;
                        if (pos >= 0 && pos < n && M[i][pos] == 'L' && ladraoUsado[pos] == 0) {
                            ladraoUsado[pos] = 1;
                            totalPresos++;
                            break;
                        }
                    }
                }
            }
        }

        printf("%d\n", totalPresos);
    }

    return 0;
}
