#include <stdio.h>
#include <string.h>
#include <locale.h>

void main() {
    float kilometragem,preço;
    setlocale(LC_ALL, "Portuguese");
    
    printf("<<< EX020 - Tabela de Preços >>>\n");
    printf("\n");
    printf("\n=================== TABELA DE PREÇOS ===================\n");
    printf("|  Viagens até 200km \t\t             R$0,50/Km |\n");
    printf("|  Viagens acima de 200km \t             R$0,35/Km |\n");
    printf("========================================================\n");
    printf("\n Distância total da viagem (KM): ");
    scanf("%f", &kilometragem);
        if ( kilometragem >= 200) {
            preço = kilometragem * 0.35;
            printf(" Uma viagem de %.0fKM vai custar R$0,35/Km\n",kilometragem);
            printf(" Valor total: R$%.2f\n", preço);
        } else {
            preço = kilometragem * 0.5;
            printf(" Uma viagem de %.0fKM vai custar R$0,50/Km\n",kilometragem);
            printf(" Valor total: R$%.2f\n", preço); 
        }
    printf("\n========================================================\n");
} 