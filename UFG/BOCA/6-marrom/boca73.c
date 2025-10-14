#include <stdio.h>
#define MAX 10005

typedef struct {
    int horas;
    int minutos;
} Horario;

void zerarArr(Horario *horasFunc,int n) {
    int i;
    for ( i = 0; i < n; i++){
        horasFunc[i].horas = 0;
        horasFunc[i].minutos = 0; 
    }
}

int qtdMachine(Horario *horasFunc, int n) {
    int i;

    if (n == 0) {
        return 0;
    }

    int maxMaquinas = 1;
    int contagemAtual = 1;

    for (i = 1; i < n; i++) {
        if (horasFunc[i].horas == horasFunc[i-1].horas && horasFunc[i].minutos == horasFunc[i-1].minutos) {
            contagemAtual++;
        } else {
            contagemAtual = 1;
        }
        if (contagemAtual > maxMaquinas) {
            maxMaquinas = contagemAtual;
        }
    }

    return maxMaquinas;
}

void swap(Horario *a, Horario *b){
    Horario aux = *a;
    *a = *b;
    *b = aux;
}

void bubbleSort(Horario arr[], int n){
    int i, j;
    for(i = 0; i < n - 1; i++) {
        for(j = 0; j < n - i - 1; j++) { 
            if (arr[j].horas > arr[j+1].horas) {
                swap(&arr[j], &arr[j+1]);
            } else if (arr[j].horas == arr[j+1].horas && arr[j].minutos > arr[j+1].minutos){
                swap(&arr[j], &arr[j+1]);
            }
        }
    }
}

int main(){
    int c, n, i, j;
    Horario horas[MAX];
    int results[MAX];

    scanf("%d", &c);
    for(i = 0; i < c; i++) {
        scanf("%d", &n);
        for(j = 0; j < n; j++) {
            scanf("%d %d", &horas[j].horas, &horas[j].minutos);
        }
        bubbleSort(horas, n);
        results[i] = qtdMachine(horas, n);
        zerarArr(horas, n);
    }

    for(i = 0; i < c; i++) {
        printf("%d\n", results[i]);
    }

    return 0;
}
