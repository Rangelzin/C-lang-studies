#include <stdio.h>
#include <math.h>

int num_invertido = 0;

int numeroInvertido(int numero, int algarismos) {
    int i,base = pow(10,algarismos);
    
    if (base == 0) return num_invertido;
    else {
        num_invertido += (numero % 10) * base;
        return numeroInvertido(numero/10,algarismos-1);
    }

    return 0;
}

int main() {
    int num;
    scanf("%d", &num);
    int digitos = (int)floor(log10(num));

    int NumInvert = numeroInvertido(num, digitos);
    printf("%d\n", NumInvert);
    return 0;
}