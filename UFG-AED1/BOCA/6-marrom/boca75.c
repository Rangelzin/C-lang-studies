#include <stdio.h>
#define MAX 200

typedef struct{
    int id;
    int categoria;
    int tempo;
} child;

void swap(child *a, child *b) {
    child temp = *a;
    *a = *b;
    *b = temp;
}

void bubbleSort(child arr[], int n) {
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if(arr[j].tempo > arr[j+1].tempo)
                swap(&arr[j],&arr[j+1]);
        }
    }
}

int main() {
    int n, m, i,j,temp,countM=0,countF=0;
    scanf("%d %d", &n, &m);

    child Criancas[n];
    child masc[n];
    child fem[n];

    for (i = 0; i < n; i++) {
        Criancas[i].id = 0;
        Criancas[i].categoria = 0; 
        Criancas[i].tempo = 0;
        masc[i].id = 0; 
        masc[i].categoria = 0; 
        masc[i].tempo = 0; 
        fem[i].id = 0; 
        fem[i].categoria = 0; 
        fem[i].tempo = 0; 
    }

    for (i = 0; i < n; i++) {
        Criancas[i].id = i+1;
        scanf("%d", &Criancas[i].categoria);
        for (j = 0; j < m; j++){
           scanf("%d", &temp);
           Criancas[i].tempo += temp;
        }
    }

    for (i = 0; i < n; i++) {
        if(Criancas[i].categoria == 1) {
            masc[countM].id = Criancas[i].id;
            masc[countM].categoria = Criancas[i].categoria;
            masc[countM].tempo = Criancas[i].tempo;
            countM++;
        }
    }

    for (i = 0; i < n; i++){
        if(Criancas[i].categoria == 2){
            fem[countF].id = Criancas[i].id;
            fem[countF].categoria = Criancas[i].categoria;
            fem[countF].tempo = Criancas[i].tempo;
            countF++;
        }
    }

    bubbleSort(masc, countM);
    bubbleSort(fem, countF);

    printf("%d %d\n", masc[0].id,fem[0].id);

    return 0;
}