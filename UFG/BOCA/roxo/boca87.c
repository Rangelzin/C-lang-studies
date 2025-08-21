#include <stdio.h>
#define Pi 3.14159
#define V 100.00

int main() {
  float a, r, Ac, Al, At, custo;
  
  scanf("%f", &r);
  scanf("%f", &a);
  Ac = Pi*r*r;
  Al = 2*Pi*r*a;
  At = 2*Ac + Al;
  custo = At*V;
  printf("O VALOR DO CUSTO E = %.2f\n", custo);
  return 0;
 }