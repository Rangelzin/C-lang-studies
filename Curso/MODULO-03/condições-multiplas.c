#include <stdio.h>

void main() {
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);
    
    switch (n){
    case 1:
        printf("UM\n");
        break;
    case 2:
        printf("DOIS\n");
        break;
    case 3:
        printf("TRÊS\n");
        break;
    case 4:
        printf("QUATRO\n");
        break;
    default:
        printf("ERRO\n");
        break;
    }
}