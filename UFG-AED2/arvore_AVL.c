#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include"arvore_AVL.h"

struct NO
{
    int info;
    struct  NO* esq;
    struct NO* dir;
};

ArvBin* cria_ArvBin(){
    ArvBin* raiz = malloc(sizeof(ArvBin));
    if(raiz != NULL){
        *raiz = NULL; 
    }
    return raiz;
}

ArvBin* insere_NO_ArvBin(ArvBin* raiz, int valor){
     if (raiz == NULL){
        return 0;
    }

    if (*raiz == NULL){
        struct NO* novo = malloc(sizeof(struct NO));

        if (novo == NULL){
            return 0;
        }

        novo->info = valor;
        novo->esq = NULL;
        novo->dir = NULL;

        *raiz = novo;
        return raiz;
    }

    if (valor < (*raiz)->info){
        return insere_NO_ArvBin(&((*raiz)->esq), valor);
    }
    else{
        return insere_NO_ArvBin(&((*raiz)->dir), valor);
    }

}

ArvBin* remove_NO_ArvBin(ArvBin* raiz, int valor){
    if (raiz == NULL){
        return NULL;
    }

    if (*raiz == NULL){
        return raiz;
    }

    if (valor < (*raiz)->info){
        return remove_NO_ArvBin(&((*raiz)->esq), valor);
    }
    else if (valor > (*raiz)->info){
        return remove_NO_ArvBin(&((*raiz)->dir), valor);
    }
    else{
        // caso 1: nó sem filhos
        if ((*raiz)->esq == NULL && (*raiz)->dir == NULL){
            free(*raiz);
            *raiz = NULL;
        }
        // caso 2: nó com apenas filho à direita
        else if ((*raiz)->esq == NULL){
            struct NO* temp = *raiz;
            *raiz = (*raiz)->dir;
            free(temp);
        }
        // caso 3: nó com apenas filho à esquerda
        else if ((*raiz)->dir == NULL){
            struct NO* temp = *raiz;
            *raiz = (*raiz)->esq;
            free(temp);
        }
        // caso 4: nó com dois filhos
        else{
            struct NO* temp = (*raiz)->dir;

            // procura o menor da subárvore direita
            while (temp->esq != NULL){
                temp = temp->esq;
            }

            // copia o valor do sucessor
            (*raiz)->info = temp->info;

            // remove o nó que foi copiado
            remove_NO_ArvBin(&((*raiz)->dir), temp->info);
        }
    }

    return raiz;
}

int busca_NO_ArvBin(ArvBin* raiz, int valor){

    if (raiz == NULL){
        return 0;
    }

    if (*raiz == NULL){
        return 0;
    }

    if ((*raiz)->info == valor){
        return 1;
    }

    if (valor < (*raiz)->info){
        return busca_NO_ArvBin(&((*raiz)->esq), valor);
    }
    else{
        return busca_NO_ArvBin(&((*raiz)->dir), valor);
    }
}

void pre_Ordem(struct NO* raiz){
    if(raiz == NULL){
        return;
    }

    printf("%d ", raiz->info);
    pre_Ordem(raiz->esq);
    pre_Ordem(raiz->dir);
}

void em_Ordem(struct NO* raiz){
    if(raiz == NULL){
        return;
    }

    em_Ordem(raiz->esq);
    printf("%d ", raiz->info);
    em_Ordem(raiz->dir);
}

void pos_Ordem(struct NO* raiz){
    if(raiz == NULL){
        return;
    }

    pos_Ordem(raiz->esq);
    pos_Ordem(raiz->dir);
    printf("%d ", raiz->info);
}

ArvBin* imprimeArvore(struct NO* raiz, int nivel){

    if(raiz == NULL){
        return 0 ;
    }

    // primeiro imprime a subárvore direita
    imprimeArvore(raiz->dir, nivel + 1);

    // imprime o nó atual com indentação
    for(int i = 0; i < nivel; i++)
        printf("    ");

    printf("%d\n", raiz->info);

    // depois imprime a subárvore esquerda
    imprimeArvore(raiz->esq, nivel + 1);
}

/*************************************************************************/

int altura_NO(struct NO* raiz){
    if (raiz == NULL){
        return -1; // folha terá altura 0
    }

    int alt_esq = altura_NO(raiz->esq);
    int alt_dir = altura_NO(raiz->dir);

    if (alt_esq > alt_dir){
        return alt_esq + 1;
    }
    else{
        return alt_dir + 1;
    }
}

int fator_balanceamento(struct NO* raiz){
    if (raiz == NULL){
        return 0;
    }

    return altura_NO(raiz->esq) - altura_NO(raiz->dir);
}

void rotacaoLL(ArvBin* raiz){
    struct NO* no = *raiz;
    struct NO* no_esq = no->esq;

    no->esq = no_esq->dir;
    no_esq->dir = no;

    *raiz = no_esq;
}

void rotacaoRR(ArvBin* raiz){
    struct NO* no = *raiz;
    struct NO* no_dir = no->dir;

    no->dir = no_dir->esq;
    no_dir->esq = no;

    *raiz = no_dir;
}

void rotacaoLR(ArvBin* raiz){
    rotacaoRR(&((*raiz)->esq));
    rotacaoLL(raiz);
}

void rotacaoRL(ArvBin* raiz){
    rotacaoLL(&((*raiz)->dir));
    rotacaoRR(raiz);
}

ArvBin* insere_NO_AVL(ArvBin* raiz, int valor){
    if (raiz == NULL){
        return NULL;
    }

    if (*raiz == NULL){
        struct NO* novo = malloc(sizeof(struct NO));
        if (novo == NULL){
            return NULL;
        }

        novo->info = valor;
        novo->esq = NULL;
        novo->dir = NULL;

        *raiz = novo;
        return raiz;
    }

    if (valor < (*raiz)->info){
        insere_NO_AVL(&((*raiz)->esq), valor);
    }
    else if (valor > (*raiz)->info){
        insere_NO_AVL(&((*raiz)->dir), valor);
    }
    else{
        // não insere valores repetidos
        return raiz;
    }

    int fb = fator_balanceamento(*raiz);

    // caso LL
    if (fb > 1 && valor < (*raiz)->esq->info){
        rotacaoLL(raiz);
    }
    // caso RR
    else if (fb < -1 && valor > (*raiz)->dir->info){
        rotacaoRR(raiz);
    }
    // caso LR
    else if (fb > 1 && valor > (*raiz)->esq->info){
        rotacaoLR(raiz);
    }
    // caso RL
    else if (fb < -1 && valor < (*raiz)->dir->info){
        rotacaoRL(raiz);
    }

    return raiz;
}

ArvBin* remove_NO_AVL(ArvBin* raiz, int valor){
    if (raiz == NULL){
        return NULL;
    }

    if (*raiz == NULL){
        return raiz;
    }

    if (valor < (*raiz)->info){
        remove_NO_AVL(&((*raiz)->esq), valor);
    }
    else if (valor > (*raiz)->info){
        remove_NO_AVL(&((*raiz)->dir), valor);
    }
    else{
        // caso 1: sem filhos
        if ((*raiz)->esq == NULL && (*raiz)->dir == NULL){
            free(*raiz);
            *raiz = NULL;
        }
        // caso 2: só filho à direita
        else if ((*raiz)->esq == NULL){
            struct NO* temp = *raiz;
            *raiz = (*raiz)->dir;
            free(temp);
        }
        // caso 3: só filho à esquerda
        else if ((*raiz)->dir == NULL){
            struct NO* temp = *raiz;
            *raiz = (*raiz)->esq;
            free(temp);
        }
        // caso 4: dois filhos
        else{
            struct NO* temp = (*raiz)->dir;

            while (temp->esq != NULL){
                temp = temp->esq;
            }

            (*raiz)->info = temp->info;
            remove_NO_AVL(&((*raiz)->dir), temp->info);
        }
    }

    // se a árvore ficou vazia após a remoção
    if (*raiz == NULL){
        return raiz;
    }

    int fb = fator_balanceamento(*raiz);

    // caso LL
    if (fb > 1 && fator_balanceamento((*raiz)->esq) >= 0){
        rotacaoLL(raiz);
    }
    // caso LR
    else if (fb > 1 && fator_balanceamento((*raiz)->esq) < 0){
        rotacaoLR(raiz);
    }
    // caso RR
    else if (fb < -1 && fator_balanceamento((*raiz)->dir) <= 0){
        rotacaoRR(raiz);
    }
    // caso RL
    else if (fb < -1 && fator_balanceamento((*raiz)->dir) > 0){
        rotacaoRL(raiz);
    }

    return raiz;
}

/*************************************************************************/

int main(){
    ArvBin* raiz = cria_ArvBin();
    
    insere_NO_AVL(raiz, 30);
    insere_NO_AVL(raiz, 20);
    insere_NO_AVL(raiz, 10);
    insere_NO_AVL(raiz, 40);
    insere_NO_AVL(raiz, 50);
    insere_NO_AVL(raiz, 25);
    insere_NO_AVL(raiz, 45);

    printf("Árvore AVL em ordem: \n");
    imprimeArvore(*raiz, 0);
    printf("\n");

    remove_NO_AVL(raiz, 40);

    printf("Árvore AVL após remoção de 40: \n");
    imprimeArvore(*raiz, 0);
    printf("\n");

    return 0;
    
}