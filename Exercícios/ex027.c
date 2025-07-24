#include <stdio.h>

void main() {
    int numero1, numero2, numero3, maior, menor, meio;

    printf("<<< EX023 - Ordem de dois número >>>\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf(" Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf(" Digite o segundo número: ");
    scanf("%d", &numero2);
    printf(" Digite o terceiro número: ");
    scanf("%d", &numero3);

    if (numero1 > numero2 && numero1 > numero3) {
        maior = numero1;
        if (numero2 > numero3) {
            meio = numero2;
            menor = numero3;
        } else {
            meio = numero3;
            menor = numero2;
        }
    } else if (numero2 > numero1 && numero2 > numero3) {
        maior = numero2;
        if (numero1 > numero3) {
            meio = numero1;
            menor = numero3;
        } else {
            meio = numero3;
            menor = numero1;
        }
    } else {
        maior = numero3;
        if (numero1 > numero2) {
            meio = numero1;
            menor = numero2;
        } else {
            meio = numero2;
            menor = numero1;
        }
    }
    printf("\n");
    printf(" O MAIOR é %d\n",maior);
    printf(" O MEDIO é %d\n",meio);
    printf(" O MENOR é %d\n", menor);
    
    printf("---------------------------------------\n");
}
  