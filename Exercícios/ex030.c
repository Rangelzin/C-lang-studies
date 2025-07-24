#include <stdio.h>
#include <locale.h>

void main() {
    float valor;
    int opcao;

    setlocale(LC_ALL, "Portuguese");
    
    printf("<<< EX030 - Preço por época >>>\n");
    printf("\n");
    printf("======================================\n");
    printf(" Digite o preço do produto: R$");
    scanf("%f", &valor);
    printf("\n=============== PERIODO ==============\n");

    printf(" 1\t Carnaval [+10%%] \n");
    printf(" 2\t Férias Escolares [+20%%]\n");
    printf(" 3\t Dia das Crianças [+5%%]\n");
    printf(" 4\t Black Friday [-30%%]\n");
    printf(" 5\t Natal [-5%%]\n");
    printf("======================================\n");
    printf(" Escolha uma operação => ");
    scanf("%d", &opcao);

    switch (opcao){
    case 1:
        printf(" Na época de %s, o preço do produto será: R$%.2f\n", "Carnaval", valor * 1.10);
        break;
    case 2:
        printf(" Na época de %s, o preço do produto será: R$%.2f\n", "Férias Escolares", valor * 1.20);   
        break;
    case 3:
        printf(" Na época de %s, o preço do produto será: R$%.2f\n", "Dia das Crianças", valor * 1.05);   
        break;
    case 4:
        printf(" Na época de %s, o preço do produto será: R$%.2f\n", "Black Friday", valor * 0.70);
        break;
    case 5:
        printf(" Na época de %s, o preço do produto será: R$%.2f\n", "Natal", valor * 0.95);
        break;
    default:
        printf(" Em épocas assim, o preço do produto mantém em R$%.2f\n", valor);
    }
    
     printf("======================================\n");
}
  