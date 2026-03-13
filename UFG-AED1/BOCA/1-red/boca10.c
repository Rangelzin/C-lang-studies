#include <stdio.h>
#include <math.h>

#define PI 3.14159265

int main() {
    int N, i, a, b, c;
    char OP;

    scanf("%d", &N);

    double result[N],p; 

    for (i = 0; i < N; i++) {
        scanf(" %c", &OP);

        switch (OP) {
            case 'C': 
                scanf("%d", &a);
                result[i] = PI * a * a;
                break;

            case 'E': 
                scanf("%d %d", &a, &b);
                result[i] = PI * a * b;
                break;

            case 'T': { 
                scanf("%d %d %d", &a, &b, &c);
                p = (a + b + c) / 2.0;
                result[i] = sqrt(p * (p - a) * (p - b) * (p - c));
                break;
            }

            case 'Z': 
                scanf("%d %d %d", &a, &b, &c);
                result[i] = ((a + b) * c) / 2.0;
                break;

            default:
                result[i] = 0; 
                break;
        }
    }

    for (i = 0; i < N; i++) {
        printf("%.0f\n", round(result[i]));
    }

    return 0;
}
