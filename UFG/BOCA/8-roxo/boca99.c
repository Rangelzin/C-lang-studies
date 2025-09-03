#include <stdio.h>
#include <math.h>

int main() {
    double N;
    long long den = 1;
    scanf("%lf", &N);
   
    while (fmod(N * den, 1.0) > 1e-9) {
        den *= 10;
    }
    long long num = (long long)(N * den);

    long long a_mdc = num;
    long long b_mdc = den;
    long long resto;

    while (b_mdc != 0) {
        resto = a_mdc % b_mdc;
        a_mdc = b_mdc;
        b_mdc = resto;
    }
    
    long long divisor_comum = a_mdc;

    long long num_simplificado = num / divisor_comum;
    long long den_simplificado = den / divisor_comum;

 
    printf("%lld/%lld\n", num_simplificado, den_simplificado);

    return 0;
}