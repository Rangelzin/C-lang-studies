#include <stdio.h>
#define MAX 1000

void binario(int numero) {
    if (numero <= 0)
        return;
    binario(numero / 2);
    printf("%d", numero % 2);
}

int main() {
    int count,i;
    int input[MAX];
    

    scanf("%d", &count);
    
    for (i = 0; i < count; i++){
        scanf("%d", &input[i]);
    }
    
    for (i = 0; i < count; i++){
        binario(input[i]);
        printf("\n");
    }

    return 0;
}