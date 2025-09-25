#include <stdio.h>
#include <math.h>
#define MAX_SIZE 50

void getSubmatrix(int n, double matrix[][MAX_SIZE], double submatrix[][MAX_SIZE], int row_to_skip, int col_to_skip) {
    int sub_i = 0;
    int sub_j = 0;
    int i, j;

    for (i = 0; i < n; i++) {
        if (i == row_to_skip) continue; 
        
        sub_j = 0; 
        for (j = 0; j < n; j++) {
            if (j == col_to_skip) continue; 
            
            submatrix[sub_i][sub_j] = matrix[i][j];
            sub_j++;
        }
        sub_i++;
    }
}

double determinant(int n, double matrix[][MAX_SIZE]) {
    double det;
    double temp_submatrix[MAX_SIZE][MAX_SIZE];
    int sign;
    int j;

    if (n == 1) {
        return matrix[0][0];
    }
    
    det = 0.0;
    sign = 1;

    for (j = 0; j < n; j++) {
        getSubmatrix(n, matrix, temp_submatrix, 0, j); 
        det += sign * matrix[0][j] * determinant(n - 1, temp_submatrix);
        sign = -sign;
    }
    
    return det;
}

int main() {
    int m, n, i, j;
    char OP;
    int matriz_int[MAX_SIZE][MAX_SIZE];
    double matriz_double[MAX_SIZE][MAX_SIZE];

    scanf("%d %d", &m, &n);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz_int[i][j]);
        }
    }
    scanf(" %c", &OP);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            matriz_double[i][j] = (double)matriz_int[i][j];
        }
    }

    switch (OP) {
        case 'I':
        {
            double det;
            double cofactors[MAX_SIZE][MAX_SIZE];
            double temp_submatrix[MAX_SIZE][MAX_SIZE];
            double adjugate[MAX_SIZE][MAX_SIZE];
            double inverse[MAX_SIZE][MAX_SIZE];
            double sign;

            if (n != m) {
                printf("ERROR\n");
                break;
            }

            det = determinant(n, matriz_double);

            if (det == 0) {
                printf("ERROR\n");
                break;
            }

            if (n == 1) {
                inverse[0][0] = 1.0 / matriz_double[0][0];
            } else {
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        getSubmatrix(n, matriz_double, temp_submatrix, i, j);
                        sign = pow(-1, i + j);
                        cofactors[i][j] = sign * determinant(n - 1, temp_submatrix);
                    }
                }
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        adjugate[j][i] = cofactors[i][j];
                    }
                }
                for (i = 0; i < n; i++) {
                    for (j = 0; j < n; j++) {
                        inverse[i][j] = adjugate[i][j] / det;
                    }
                }
            }
            
            for (i = 0; i < n; i++) {
                for (j = 0; j < n; j++) {
                    if (fabs(inverse[i][j]) < 0.0001) {
                        printf("0 ");
                    } else {
                        printf("%.0f ", inverse[i][j]);
                    }
                }
                printf("\n");
            }
            break;
        }
        case 'T': 
        {
            int resultado[MAX_SIZE][MAX_SIZE];
            for (i = 0; i < m; i++) {
                for (j = 0; j < n; j++) {
                    resultado[j][i] = matriz_int[i][j];
                }
            }
            for (i = 0; i < n; i++) {
                for (j = 0; j < m; j++) {
                    printf("%d ", resultado[i][j]);
                }
                printf("\n");
            }
            break;
        }
        case 'D':
        {
            double det;
            if (n != m) {
                printf("ERROR\n");
                break;
            }
            det = determinant(n, matriz_double);
            printf("%.0f\n", det);
            break;
        }
        default:
            break;
    }

    return 0;
}