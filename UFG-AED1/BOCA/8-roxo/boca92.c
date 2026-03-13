#include <stdio.h>

int main() {
    int CC, DR, RT, class;

    scanf("%i", &CC);
    scanf("%i", &DR);
    scanf("%i", &RT);

   
    if (CC < 7 && DR > 50 && RT > 80000) {
        class = 10;
    } 
    else if (CC < 7 && DR > 50) {
        class = 9;
    } 
    else if (CC < 7) {
        class = 8;
    } 
    else {
        class = 7;
    }

    printf("ACO DE GRAU = %i\n", class);
    
    return 0; 
}