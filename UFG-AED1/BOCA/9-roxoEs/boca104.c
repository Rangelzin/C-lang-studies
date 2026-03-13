#include <stdio.h>
#define N 10000

int main() {
  int vCount[N+1], vOrd[N], i, cont, n;
  scanf("%d", &n);
  while(n!=0) {
     cont = 0;
     for(i=0; i<N+1; i++)
        vCount[i] = 0;
     for(i=0; i<n; i++) {
       scanf("%d", &vOrd[i]);
       vCount[vOrd[i]]++;
    }
     i=0;
     while((cont!=n)&&(i<(N+1))) {
        while(vCount[i]>0){
          printf("%d ", i);
          cont++;
          vCount[i]--;
        }
        i++;
     }
     printf("\n");
  scanf("%d", &n);
  }
 return 0;
}