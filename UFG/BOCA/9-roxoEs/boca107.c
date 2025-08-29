#include <stdio.h>
#define N 6

int main() {
  int M[N][N], i, j, valor, maior=-999;
  for(i=0; i<N; i++)
    for(j=0; j<N; j++)
       scanf("%d", &M[i][j]);
  for(i=0; i<N-2;i++) {
    for(j=0; j<N-2;j++){ 
        valor = M[i][j] + M[i][j+1] + M[i][j+2] + M[i+1][j+1] + M[i+2][j] +M[i+2][j+1] + M[i+2][j+2];
        if(maior < valor)
          maior = valor;
      }
    }
  printf("%d\n", maior);

return 0;
}