#include <stdio.h>
#include <math.h>
#define MAX_N 10001

int n;
int coeficientes[MAX_N];

double f(double x) {
    double resultado = 0.0;
    int i;

    for ( i = 0; i <= n; i++){
        resultado += coeficientes[i] * pow(x, i);
    }
    return resultado;
}

int main() {
    double e, a, b, m, f_m;
    int i;

    scanf("%d %lf", &n, &e);
    scanf("%lf %lf", &a, &b);

    for (i = 0; i <= n; i++) {
        scanf("%d", &coeficientes[i]);
    }

    if (f(a) * f(b) >= 0) {
        return 0; 
    }

    while (1) {
        m = (a + b) / 2;
        f_m = f(m); 

        if (fabs(f_m) <= e) {
            printf("%.6lf\n", m);
            break;
        }
        if (f(a) * f_m < 0) {
            b = m;
        } else {
            a = m;
        }
    }

    return 0;
}