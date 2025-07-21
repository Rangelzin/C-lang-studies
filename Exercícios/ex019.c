#include <stdio.h>

void main() {
    int ano;

    printf("<<< EX019 - Ano Bissexto >>>\n");
    printf("\n");
    printf("------------------------------------------------\n");
    printf(" Digite um ano qualquer: ");
    scanf("%d", &ano);
    if ( ano % 100 != 0 && ano % 4 == 0 ){
        printf(" O ano %d é BISSEXTO\n", ano);
    } else if ( ano % 400 == 0){
        printf(" O ano %d é BISSEXTO\n", ano);
    } else {
       printf(" O ano %d NÃO é BISSEXTO\n", ano); 
    }
    printf("------------------------------------------------\n");
}
