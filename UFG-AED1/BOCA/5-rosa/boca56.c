#include <stdio.h>
#define L 10000

int gcd(int n, int d) {
    while (d != 0) {
        int temp = d;
        d = n % d;
        n = temp;
    }
    return n;
}

void findKthRational(int k, int *n_out, int *d_out) {
    int d, n;
    int count = 0; 

    for (d = 1; ; d++) {
        for (n = 0; n <= d; n++) {
            
            if (gcd(n, d) == 1) {
                count++; 
                if (count == k) {
                    *n_out = n; 
                    *d_out = d; 
                    return;     
                }
            }
        }
    }
}

int main() {
    int n=0,d=0,nc=1,i,results[L]={0};

    for (i = 0; nc != 0; i++){
        scanf("%d", &nc);
        if (nc != 0)
            results[i] = nc;
    }

    int len = i-1;

    for (i = 0; i < len; i++){
        findKthRational(results[i], &n, &d);
        printf("%d/%d\n", n, d);
    }

    return 0;
}