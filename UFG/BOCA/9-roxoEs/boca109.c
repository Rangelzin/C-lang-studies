#include <stdio.h>

int main() {
  int N, i, j, k,acertos=0;

  scanf("%d", &N);

  int loterias[N + 1][6],results[3] = {0, 0, 0};

  for(i = 0; i <= N; i++) {
    for(j = 0; j < 6; j++) {
       scanf("%d", &loterias[i][j]);
    }
  }
  
  for(i = 0; i < N; i++) {
    acertos = 0; 

    for(j = 0; j < 6; j++) { 
      for(k = 0; k < 6; k++) {  
        if (loterias[i][j] == loterias[N][k]) {
          acertos++;
          break; 
        }
      }
    }

    switch (acertos) {
      case 6: results[0]++; break;
      case 5: results[1]++; break;
      case 4: results[2]++; break;
      default: break;
    }
  }

  // Sena
  if (results[0] > 0) {
    printf("Houve %d acertador(es) da sena\n", results[0]);
  } else {
    printf("Nao houve acertador para sena\n"); 
  }

  // Quina
  if (results[1] > 0) {
    printf("Houve %d acertador(es) da quina\n", results[1]);
  } else {
    printf("Nao houve acertador para quina\n"); 
  }

 
  if (results[2] > 0) {
    printf("Houve %d acertador(es) da quadra\n", results[2]); 
  } else {
    printf("Nao houve acertador para quadra\n"); 
  }
    
  return 0;
}