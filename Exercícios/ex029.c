#include <stdio.h>
#include <locale.h>

void main() {
    float peso;
    int planetas;

    setlocale(LC_ALL, "Portuguese");
    
    printf("<<< EX029 - Seu peso nos planetas v1.0 >>>\n");
    printf("\n");
    printf("---------------------------------------\n");
    printf(" Seu peso na Terra(kg): ");
    scanf("%f", &peso);
    printf("\n==========================\n");
    printf(" 1\t\t Mercúrio\n");
    printf(" 2\t\t Vênus\n");
    printf(" 3\t\t Marte\n");
    printf(" 4\t\t Júpiter\n");
    printf(" 5\t\t Saturno\n");
    printf(" 6\t\t Urano\n");
    printf("==========================\n");
    printf(" Escolha uma operação => ");
    scanf("%d", &planetas);

    switch (planetas){
    case 1:
        printf("\n Seu peso em Mercúrio é %.2f kg\n", peso * 0.37);
        break;
    case 2:
        printf("\n Seu peso em Vênus é %.2f kg\n", peso * 0.88);    
        break;
    case 3:
        printf("\n Seu peso em Marte é %.2f kg\n", peso * 0.38);    
        break;
    case 4:
        printf("\n Seu peso em Júpiter é %.2f kg\n", peso * 2.64);
        break;
    case 5:
        printf("\n Seu peso em Saturno é %.2f kg\n", peso * 1.15);
        break;
    case 6:
        printf("\n Seu peso em Urano é %.2f kg\n", peso * 1.17);
        break;
    default:
        printf(" PLANETA INVÁLIDO! Tente Novamente!\n");
    }
    
    printf("---------------------------------------\n");
}
  