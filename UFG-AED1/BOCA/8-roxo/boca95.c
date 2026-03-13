#include <stdio.h>

int main() {
    double n,init,K,s,R,j,aux;

    scanf("%lf", &n);
    scanf("%lf", &init);
    scanf("%lf", &K);
    scanf("%lf", &s);

    aux = init;

    printf("Tabuada de soma:\n");
    for (j = init; j <= K; j++){
        R = n + init;
        printf("%.2f + %.2f = %.2f\n",n,init,R);
        init += s;
    }
    init = aux;
    printf("Tabuada de subtracao:\n");
    for (j = init; j <= K; j++){
        R = n - init;
        printf("%.2f - %.2f = %.2f\n",n,init,R);
        init += s;
    }
    init = aux;
    printf("Tabuada de multiplicacao:\n");
    for (j = init; j <= K; j++){
        R = n * init;
        printf("%.2f x %.2f = %.2f\n",n,init,R);
        init += s;
    }
    init = aux;
    printf("Tabuada de divisao:\n");
    for (j = init; j <= K; j++){
        R = n / init;
        printf("%.2f / %.2f = %.2f\n",n,init,R);
        init += s;
    }

    return 0;
}