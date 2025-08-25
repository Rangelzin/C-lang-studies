#include <stdio.h>

int main() {
    double m, a, t;

    scanf("%lf",&m);
    scanf("%lf",&a);
    scanf("%lf",&t);

    double vel = (a * t) * 3.6;
    double dist = (a * (t * t)) / 2;
    double Trab = ((m *1000) * ((vel/3.6) * (vel/3.6))) / 2;

    printf("VELOCIDADE = %.2f\n" ,vel);
    printf("ESPACO PERCORRIDO = %.2f\n" ,dist);
    printf("TRABALHO REALIZADO = %.2f\n" ,Trab);

    return 0;
}