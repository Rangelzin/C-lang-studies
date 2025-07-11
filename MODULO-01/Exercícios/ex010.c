#include <stdio.h>
#include <string.h>
#include <locale.h>

void retirar_quebra(char *n) {
    int len = strlen(n);
    if (len > 0 && n[len - 1] == '\n') {
        n[len - 1] = '\0';
    }
}

void main() {
    char produto[100];
    float preco, desconto, preco_final;

    setlocale(LC_ALL, "Portuguese");
    printf("<<< EX010 - Preço e Desconto >>>\n");
    printf("\n");

    printf("----------------------------------------------------------\n");
    printf(" Produto Desejável: ");
     fgets(produto, sizeof(produto), stdin);
     retirar_quebra(produto);
    printf(" Preço do(a) %s: R$", produto);
     scanf("%f", &preco);
    printf(" Desconto (%%): ");
     scanf("%f", &desconto);
    preco_final = (preco * (100 - desconto)) / 100;
    printf("\n");
    printf(" O produto %s custava R$%.2f.\n", produto, preco);
    printf(" Porém, com %%%.2f de desconto, passa a custar R$%.2f\n", desconto,preco_final);

    printf("----------------------------------------------------------\n");
} 