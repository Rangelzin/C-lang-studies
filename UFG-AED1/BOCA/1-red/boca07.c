#include <stdio.h>

int main() {
    int P, S,i,j;

    scanf("%d %d", &P, &S);

    int pedras[P+1], sapos[S][2];

    for (i = 0; i <= P; i++){
        pedras[i] = 0;
    }

    for (i = 0; i < S; i++){
        scanf("%d %d", &sapos[i][0],&sapos[i][1]);
    }
    
    for (i = 0; i < S; i++){
        for (j = sapos[i][0]; j <= P; j += sapos[i][1]) {
            pedras[j] = 1;
        }

        for (j = sapos[i][0]; j > 0; j -= sapos[i][1]) {
            pedras[j] = 1;
        }
    }

    for (i = 1; i < P+1; i++){
        printf("%d\n", pedras[i]);
    }

    return 0;
}