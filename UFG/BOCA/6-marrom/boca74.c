#include <stdio.h>

typedef struct {
    int id;
    int ouro;
    int prata;
    int bronze;
} Pais;

void swap(Pais *a, Pais *b) {
    Pais temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(Pais arr[], int n) {
    int i, j,precisaTrocar = 0;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
    
            precisaTrocar = 0;

            if (arr[j].ouro < arr[j+1].ouro) {
                precisaTrocar = 1;
            } else if (arr[j].ouro == arr[j+1].ouro && arr[j].prata < arr[j+1].prata) {
                precisaTrocar = 1;
            } else if (arr[j].ouro == arr[j+1].ouro && arr[j].prata == arr[j+1].prata && arr[j].bronze < arr[j+1].bronze) {
                precisaTrocar = 1;
            } else if (arr[j].ouro == arr[j+1].ouro && arr[j].prata == arr[j+1].prata && arr[j].bronze == arr[j+1].bronze && arr[j].id < arr[j+1].id) {
                precisaTrocar = 1;
            }

            if (precisaTrocar) {
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main() {
    int n, m,i,o, p, b; 
    scanf("%d %d", &n, &m);

    Pais paises[n + 1];

    for (i = 1; i <= n; i++) {
        paises[i].id = i;
        paises[i].ouro = 0;
        paises[i].prata = 0;
        paises[i].bronze = 0;
    }

    for (i = 0; i < m; i++) {
        scanf("%d %d %d", &o, &p, &b);
        paises[o].ouro++;
        paises[p].prata++;
        paises[b].bronze++;
    }

    Pais classificar[n];
    for(i = 0; i < n; i++) {
        classificar[i] = paises[i+1];
    }

    bubbleSort(classificar, n);

    for (i = 0; i < n; i++) {
        printf("%d%c", classificar[i].id, (i == n - 1) ? '\n' : ' ');
    }

    return 0;
}