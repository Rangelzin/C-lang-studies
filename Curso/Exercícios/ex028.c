#include <stdio.h>
#include <locale.h>

void main() {
    float numero1,numero2;
    char operacao;

    setlocale(LC_ALL, "Portuguese");
    
    printf("<<< EX028 - Super Calculadora v1.0 >>>\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf(" Digite o primeiro número: ");
    scanf("%f", &numero1);
    printf(" Digite o segundo número: ");
    scanf("%f", &numero2);
    printf("\n==========================\n");
    printf(" +\t Adição\n");
    printf(" -\t Subtração\n");
    printf(" *\t Multiplicação\n");
    printf(" /\t Divisão\n");
    printf("==========================\n");
    printf(" Escolha uma operação => ");
    scanf(" %c", &operacao);

    switch (operacao){
    case '+':
        printf("\n O resultado de %0.f + %0.f é %0.f\n", numero1, numero2, numero1 + numero2);
        break;
    case '-':
        printf("\n O resultado de %0.f - %0.f é %0.f\n", numero1, numero2, numero1 - numero2);    
        break;
    case '*':
        printf("\n O resultado de %0.f * %0.f é %0.f\n", numero1, numero2, numero1 * numero2);    
        break;
    case '/':
        printf("\n O resultado de %0.f / %0.f é %.2f\n", numero1, numero2, numero1 / numero2);
        break;
    default:
        printf("\n ERRO: Operação inválida!\n");
        break;
    }
    printf("\n VOLTE SEMPRE!\n");
    printf("---------------------------------------\n");
}
  