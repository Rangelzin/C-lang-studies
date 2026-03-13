#include <stdio.h>
#define TOT 1000

int main() {
    int N, i, numTOT[TOT] = {0},num,numUnic=0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &num);
        numTOT[num]++;
    }

    for (i = 0; i < TOT; i++) {
        if (numTOT[i] == 1) {
            numUnic++;
        }
    }

    printf("%d\n", numUnic);

    return 0;
}