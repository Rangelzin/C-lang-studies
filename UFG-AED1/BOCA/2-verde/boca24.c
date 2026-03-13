#include <stdio.h>
#define MAX 500

int n;
char board[MAX][MAX];
int status[MAX][MAX]; 

int solve(int r, int c) {
    int next_r = r, next_c = c;

    if (r < 0 || r >= n || c < 0 || c >= n) {
        return 3; 
    }
    if (status[r][c] != 0) {
        return (status[r][c] == 1) ? 2 : status[r][c];
    }

    status[r][c] = 1; 

    switch (board[r][c]) {
        case 'V': next_r++; break;
        case '>': next_c++; break;
        case '<': next_c--; break;
        case 'A': next_r--; break;
    }
    
    return status[r][c] = solve(next_r, next_c);
}

int main() {
    int safe_count = 0,i,j;

    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf(" %c", &board[i][j]);
        }
    }


    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (solve(i, j) == 2) {
                safe_count++;
            }
        }
    }

    printf("%d\n", safe_count);
    return 0;
}