#include <stdio.h>

int main() {
    int numero,i=0, result=0;
    int moedas[4] = {100, 50, 10, 1};

    scanf("%i", &numero);
    while (numero > 0){
        
        result += numero / moedas[i];
        
        if (i == 3) printf("MOEDAS DE %i = %i\n",moedas[i],result);
        else printf("NOTAS DE %i = %i\n",moedas[i],result);

        numero -= result * moedas[i];
        result = 0;
        i++;
    }

    return 0;
}