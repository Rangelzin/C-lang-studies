#include <stdio.h>
#include <math.h>

int main() {
    int N,i,j,ehPrimo;
    scanf("%d", &N);
    
    for (i = 0; i < N; i++){
        if (N <=1) {
            ehPrimo = 0;
            continue;
        }
        ehPrimo = 1;
        for (j = 2; j <= sqrt(N); j++){
            if (N % j == 0) {
                ehPrimo = 0;
                break;
            }
        }
    }
        
    if(ehPrimo) {
        printf("PRIMO\n");
    } else {
        printf("NAO PRIMO\n");
    }


    return 0;
}