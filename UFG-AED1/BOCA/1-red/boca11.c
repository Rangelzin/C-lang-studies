#include <stdio.h>

int main() {
    int m, n, i, j, k;
    char OP;

    scanf("%d %d", &m, &n);  

    int matriz1[m][n], matriz2[m][n], resultado[m][n];

 
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz1[i][j]);
        }
    }
   
    scanf(" %c", &OP); 

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz2[i][j]);
        }
    }


    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            resultado[i][j] = 0;
        }
    }

    switch (OP) {
        case '+':
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d ", matriz1[i][j] + matriz2[i][j]);
                }
                printf("\n");
            }
            break;

        case 'x':
      
            if (n != m) {
                printf("ERROR\n");
                break;
            }

            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    for (k = 0; k < n; k++) {
                        resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                    }
                }
            }

            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    printf("%d ", resultado[i][j]);
                }
                printf("\n");
            }
            break;

        default:
            break;
    }

    return 0;
}
