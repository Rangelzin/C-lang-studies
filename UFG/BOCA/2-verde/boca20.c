#include <stdio.h>

unsigned long long int fat_duplo(int n) {
   if(n==1)
     return(1);
    else return(n*fat_duplo(n-2));
 }
 
 int main() {
   int n;
   scanf("%d", &n);
   if(n%2==0)
     printf("%llu\n", fat_duplo(n-1));
   else printf("%llu\n", fat_duplo(n));
 
 return 0;
}
