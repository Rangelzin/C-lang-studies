#include <stdio.h>

void main() {
    int num;

    printf("<<< EX006 - Antecessor e Sucessor >>>\n");
    printf("\n");

    printf("----------------------------------------------------------------\n");
    printf(" Digite um número: ");
    scanf("%d", &num);
    printf(" Analisando o número %d, o antecessor é %d e o sucessor é o %d\n", num, num - 1, num + 1);
    printf("----------------------------------------------------------------\n");
}