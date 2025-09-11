#include <stdio.h>

int main() {
  int N,t1,t2,i;

  scanf("%d %d %d", &t1, &t2, &N);
  int valores[N];

  valores[0] = t1;
  valores[1] = t2;

  for (i = 2; i < N; i++)
      valores[i] = valores[i - 1] + valores[i - 2];

  printf("%d\n", valores[N - 1]);

  return 0;
}