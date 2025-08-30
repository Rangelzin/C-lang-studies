#include <stdio.h>
#include <math.h>

int main() {
    int N, i, j,ehPrimo;

    scanf("%d", &N);
    int nums[N];

    for (i = 0; i < N; i++){
        scanf("%d", &nums[i]);
    }
    
    for (i = 0; i < N; i++){
        if (nums[i] <=1) {
            ehPrimo = 0;
            continue;
        }
        ehPrimo = 1;
        for (j = 2; j <= sqrt(nums[i]); j++){
            if (nums[i] % j == 0) {
                ehPrimo = 0;
                break;
            }
        }

        if(ehPrimo) {
            printf("primo\n");
        } else {
            printf("composto\n");
        }
    }

    return 0;
}