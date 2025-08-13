#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    float compra,desconto;
    setlocale(LC_ALL, "Portuguese");
    
    printf("<<< EX016 - Desconto com condição >>>\n");
    printf("\n");
    printf("------------------------------------------------\n");
    printf(" Qual foi o valor total das compras? R$");
     scanf("%f", &compra);

     printf("\n------------------- Mensagem --------------------\n");
     printf("\n Você comprou R$%.2f na nossa loja.\n", compra);

     if (compra >= 500) {
         desconto = compra * 0.1;
         compra -= desconto;

         printf("\n=================== ATENÇÃO ====================\n");
         printf("\n Por fazer mais de R$500 em compras, você vai receber R$%.2f de desconto\n", desconto);
         printf(" o valor total a ser pago será de R$%.2f\n", compra);
     } 
        
    printf("\n Volte sempre!\n");
    printf("-----------------------------------------------\n");
} 