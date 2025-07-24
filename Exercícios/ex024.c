#include <stdio.h>

void main() {
    int numero1,numero2;

    printf("<<< EX023 - Ordem de dois número >>>\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf(" Digite o primeiro número: ");
    scanf("%d", &numero1);
    printf(" Digite o segundo número: ");
    scanf("%d", &numero2);
    if (numero1 < numero2){ 
        printf(" Os números em órdem é %d e %d\n", numero1, numero2);
    } else if (numero1 > numero2) {
       printf(" Os números em órdem é %d e %d\n", numero2, numero1);
    } else {
        printf(" Os números são iguais!\n");
    }
    printf("---------------------------------------\n");
}
  