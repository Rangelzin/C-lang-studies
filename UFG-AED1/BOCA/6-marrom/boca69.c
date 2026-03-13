#include <stdio.h>
#include <string.h>

typedef struct {
    char nome[255];
    int problemas;
} Alunos;

void troca(Alunos *a, Alunos *b) {
    Alunos temp = *a;
    *a = *b;
    *b = temp;      
}

void bubbleSort(Alunos turma[], int n){
    int i, j;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) { 
            if ((turma[j].problemas < turma[j + 1].problemas) || 
                (turma[j].problemas == turma[j + 1].problemas && strcmp(turma[j].nome, turma[j + 1].nome) > 0))
                troca(&turma[j], &turma[j + 1]);
        }
    } 
}

int main(){
    int nc, i, j;

    scanf("%d", &nc);

    Alunos turma[nc];

    for (i = 0; i < nc; i++){
        scanf("%s %d", turma[i].nome,&turma[i].problemas);
    }

    bubbleSort(turma, nc);

    for (i = 0; i < nc; i++) {
        printf("%s %d", turma[i].nome, turma[i].problemas);
        if (i == nc - 1)
            printf(" #reprovado(a)");
        printf("\n");
    }

    return 0;
}