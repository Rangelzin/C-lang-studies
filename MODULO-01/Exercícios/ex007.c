#include <stdio.h>
#include <locale.h>

void main() {
    int num;
    int double_num;
    float third_part;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX007 - Dobro e Terça Parte >>>\n");
    printf("\n");

    printf("---------------------------------------------------------------------\n");
    printf(" Digite um número: ");
    scanf("%d", &num);
    double_num = num << 1; 
    third_part = num / 3.0; 
    printf(" Analisando o número %d, o seu dobro é %d e a terça parte é %.2f\n", num, double_num, third_part);
    printf("---------------------------------------------------------------------\n");
}