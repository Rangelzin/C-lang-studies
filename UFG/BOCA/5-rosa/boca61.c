#include <stdio.h>

int main() {
    int n, i;
    int A, B, C, k;
    int results[10];
    int valdd = 0,x0=0;

    scanf("%d", &n);

    for ( i = 0; i < n; i++){
        x0 = 0,valdd=0;
        scanf("%d %d %d %d", &A, &B, &C, &k);
        while(valdd != 1){
            if ((A * (x0 * x0)) + (B * x0) + C >= k) valdd = 1;
            else x0++;
        }
        results[i] = x0;
    }

    for ( i = 0; i < n; i++){
        printf("%d\n", results[i]);
    }
    
}