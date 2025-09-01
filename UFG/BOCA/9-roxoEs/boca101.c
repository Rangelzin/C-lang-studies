#include <stdio.h>
#define TOT 101

int main() {
    int N, i, numTOT[TOT] = {0},num,maxFreq = 0, minNum = 0;

    scanf("%d", &N);

    for (i = 0; i < N; i++) {
        scanf("%d", &num);
        numTOT[num]++;
    }

    for (i = 0; i < TOT; i++) {
        if (numTOT[i] > maxFreq) {
            maxFreq = numTOT[i];
            minNum = i;
        }
    }

    printf("%d\n%d\n", minNum, maxFreq);

    return 0;
}