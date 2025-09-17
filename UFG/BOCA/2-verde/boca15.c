#include <stdio.h>

void imprimirNaturais(int n) {
    if (n < 1) {
        return;
    }
    imprimirNaturais(n - 1);
    printf("%d ", n);
}

int main() {
    int n;
    scanf("%d", &n);
    imprimirNaturais(n);
    printf("\n");
    return 0;
}
