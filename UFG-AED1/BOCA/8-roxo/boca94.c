#include <stdio.h>

int main() {
    int A1, r, n;
    scanf("%d %d %d", &A1, &r, &n);
    int Sn = ((A1 + (A1 + ((n - 1) * r))) * n) / 2;
    printf("%d\n", Sn);
    return 0;
}