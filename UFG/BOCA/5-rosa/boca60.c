#include <stdio.h>
#include <stdlib.h>
#define N 1000

int main(){
  int i, j, p, n, k, ct, cont;
  char M[N][N];
  scanf("%d", &ct);
  while(ct--){
        cont=0;
        scanf("%d %d", &n, &k);
        for(i=0; i<n; i++){
            for(j=0; j<n;j++) {
                getchar();
                scanf("%c", &M[i][j]);
            }
        }
        cont = 0;
        for (i = 0; i < n; i++){
            for (j = 0; j < n; j++){
                if (M[i][j] == 'D'){
                    for (p = 0; p < n; p++){
                        if ((abs(j-p) <= k) && (M[i][p] == 'L') && (M[i][j] == 'D')){
                            M[i][j] = 'd';
                            M[i][p] = 'l';
                            cont++;
                        }

                        if ((abs(j-p)<=k)&& (M[p][j] == 'L') && (M[i][j] == 'D')){
                            M[i][j] = 'd';
                            M[p][j] = 'l';
                            cont++;
                        }
                    }
                }
            }
        }
        printf ("%d\n", cont);
    }
  return 0;
}