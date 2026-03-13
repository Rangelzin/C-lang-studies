#include <stdio.h>


int main() {
    int N,i,j,div=1,len=0;
    
    scanf("%i", &N);
    int numeros[N];
    char base4[N][N*N];

    for (i = 0; i < N; i++){
        scanf("%i", &numeros[i]);
    }

    for (i = 0; i < N; i++){
        div = 1; len = 1;

        while (div <= numeros[i] /4){
            div *= 4;
            len++;
        }

        for (j = len-1; j >= 0; j--){
            base4[i][j] = numeros[i] % 4;
            numeros[i] = numeros[i]/ 4;

            switch (base4[i][j]) {
            case 0:
                base4[i][j] = 'A';
                break;
            case 1:
                base4[i][j] = 'C';
                break;
            case 2:
                base4[i][j] = 'G';
                break;
            case 3:
                base4[i][j] = 'T';
                break;
            default:
                break;
            }
        }
        base4[i][len] = '\0';
    }

    for ( i = 0; i < N; i++){
        printf("%s\n", base4[i]);
    }
    
    return 0;
}