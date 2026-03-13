#include <stdio.h>

int main() {
    int N, K,i,test,maxEnvelope=1001;
    scanf("%d %d", &N, &K);
    int ModBala[K + 1];

    for (i = 0; i < K+1; i++)
        ModBala[i] = 0;
    for (i = 0; i < N; i++){
        scanf("%d", &test);
        ModBala[test]++;
    }
    for (i = 1; i < K+1; i++){
        if (ModBala[i] < maxEnvelope)
            maxEnvelope = ModBala[i];
    }

    printf("%d\n", maxEnvelope);

    return 0;
}