#include <stdio.h>

int main() {
    int N,i,soma=0;

    scanf("%d", &N);
    int nums[N];

    for (i = 0; i < N; i++){
        scanf("%d", &nums[i]);
        soma += nums[i];
    }

    printf("%d\n", soma);

    return 0;
}