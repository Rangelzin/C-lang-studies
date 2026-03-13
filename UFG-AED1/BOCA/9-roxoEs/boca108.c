#include <stdio.h>
#define N 12


int main() {
  int M[N][N], n,m, i, j, l=0, c=0;

  scanf("%d", &n);
  scanf("%d", &m);

  for(i=1; i<=n; i++)
    for(j=1;j<=m;j++)
       scanf("%d", &M[i][j]);

  i=0;
  for(j=1; j<=m;j++)
    M[i][j] = M[n][j];

  i= n+1;
  for(j=1; j<=m;j++)
  	M[i][j] = M[1][j];

  j=0;
  for(i=1; i<=n;i++)
    M[i][j] = M[i][m];

  j=m+1;
   for(i=1; i<=n;i++)
    M[i][j] = M[i][1];

  for(i=1; i<=n; i++){
     for(j=1;j<=m;j++){
    if((M[i][j]==1111)&&
       (M[i-1][j]==4)&&
       (M[i+1][j]==8)&&
       (M[i][j-1]==0)&&
       (M[i][j+1]==0))
          {l=i-1; 
           c=j-1;
          }
    }
   }

  if((l==0)&&(c==0))
    printf("WALLY NAO ESTA NA MATRIZ");
   else printf("%d %d", l, c);

  return 0;
}