#include<stdio.h>
#include<stdlib.h>
#include <unistd.h>
#include"arvore_binaria_de_busca.h"

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

ArvBin* insere_NO_ArvBin_Iterativo(ArvBin* raiz, int valor){
    if (raiz == NULL) return 0;
    
    struct NO *novo = malloc(sizeof(struct NO));

    if (novo == NULL) return 0;
    
    novo->info = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    if (*raiz == NULL){
        *raiz = novo;
        return raiz;
    }

    struct NO *atual = *raiz;
    struct NO *pai = NULL;

    while(atual != NULL); {
        pai = atual;

        if (valor < atual->info) atual = atual->esq;
        else atual = atual->dir;
    }

    if (valor < pai->info) pai->esq = novo;
    else pai->dir = novo;

    return raiz;    
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

int Quantidade_Folhas(struct NO* raiz){

    if(raiz == NULL){
        return 0 ;
    }

    if(raiz->esq == NULL && raiz->dir == NULL){
        return 1;
    }
    return Quantidade_Folhas(raiz->esq) + Quantidade_Folhas(raiz->dir);
}

int main(){

    ArvBin* raiz_1 = cria_ArvBin();
    insere_NO_ArvBin(raiz_1, 5);
    insere_NO_ArvBin(raiz_1, 2);
    insere_NO_ArvBin(raiz_1, 10);
    insere_NO_ArvBin(raiz_1, 1);
    insere_NO_ArvBin(raiz_1, 3);
    insere_NO_ArvBin(raiz_1, 7);
    insere_NO_ArvBin(raiz_1, 4);
    printf("Árvore 1:\n");
    imprimeArvore(*raiz_1, 0);

    ArvBin* raiz_2 = cria_ArvBin();
    insere_NO_ArvBin(raiz_2, 40);
    insere_NO_ArvBin(raiz_2, 20);
    insere_NO_ArvBin(raiz_2, 60);
    insere_NO_ArvBin(raiz_2, 10);
    insere_NO_ArvBin(raiz_2, 30);
    insere_NO_ArvBin(raiz_2, 50);
    insere_NO_ArvBin(raiz_2, 70);
    printf("\nÁrvore 2:\n");
    imprimeArvore(*raiz_2, 0);

    printf("\n\nPre-ordem raiz 1: ");
    pre_Ordem(*raiz_1);

    printf("\nEm-ordem raiz 1: ");
    em_Ordem(*raiz_1);

    printf("\nPos-ordem raiz 1: ");
    pos_Ordem(*raiz_1);

    printf("\n\nPre-ordem raiz 2: ");
    pre_Ordem(*raiz_2);

    printf("\nEm-ordem raiz 2: ");
    em_Ordem(*raiz_2);

    printf("\nPos-ordem raiz 2: ");
    pos_Ordem(*raiz_2);

    printf("\n\nQuantidade de folhas da raiz 1: %d\n", Quantidade_Folhas(*raiz_1));
    printf("\nQuantidade de folhas da raiz 2: %d\n", Quantidade_Folhas(*raiz_2));

    // if(busca_NO_ArvBin(raiz, 45)){
    //     printf("Valor encontrado\n");
    // }
    // else{
    //     printf("Valor nao encontrado\n");
    // }

    //sleep(5);

    // remove_NO_ArvBin(raiz, 2);
    // printf("\n\n");
    // imprimeArvore(*raiz, 0);

}