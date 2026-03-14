#include<stdio.h>
#include<stdlib.h>
#include"arvore_binaria.h"

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
        return 0; // verifica se a estrutura da árvore existe
    } 
    // Aloca o novo nó
    struct NO* novo = malloc(sizeof(struct NO));
    if (novo == NULL){
        return 0;
    } 
    novo->info = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    if (*raiz == NULL) { 
        // se a árvore estiver vazia, o novo nó vira a raiz e mudamos o conteúdo do ponteiro para ponteiro
        *raiz = novo; 
        //printf("O endereço do ponteiro 'novo' é: %p\n\n", novo);
    }

}

ArvBin* insere_NO_esq_ArvBin(ArvBin* raiz, int valor){
    if (raiz == NULL || *raiz == NULL){
        return 0; // verifica se a estrutura da árvore existe e se já existe algo guardado na raiz
    } 
    
    struct NO* novo = malloc(sizeof(struct NO));
    if (novo == NULL){
        return 0;
    } 
    novo->info = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    // (*raiz) é o nó principal, então vou "pendurar" esse novo criado à esquerda dele
    (*raiz)->esq = novo;
}

ArvBin* insere_NO_dir_ArvBin(ArvBin* raiz, int valor){
    if (raiz == NULL || *raiz == NULL){
        return 0; 
    } 
    struct NO* novo = malloc(sizeof(struct NO));
    if (novo == NULL){
        return 0;
    } 
    novo->info = valor;
    novo->esq = NULL;
    novo->dir = NULL;

    // (*raiz) é o nó principal, então vou "pendurar" esse novo criado à direita dele
    (*raiz)->dir = novo;
}

ArvBin* libera_NO(struct NO* no) {
    if (no == NULL){
        return 0;
    }
    
    // visita os filhos primeiro antes do pai, ou raiz, no caso
    libera_NO(no->esq);
    libera_NO(no->dir);
    
    // depois de garantir que os filhos sumiram, libera o pai
    free(no);
}

ArvBin* libera_ArvBin(ArvBin* raiz) {
    if (raiz == NULL){
        return 0; 
    }
    
    libera_NO(*raiz); //libera todos os nós começando pelo conteúdo da raiz
    
    free(raiz); 
}


int main(){

ArvBin* raiz = cria_ArvBin();
insere_NO_ArvBin(raiz, 10);
insere_NO_esq_ArvBin(raiz, 25);
insere_NO_dir_ArvBin(raiz, 8);

printf("Endereço guardado na raiz: %p \n", raiz);
printf("Conteúdo guardado no endereço %p: %p \n", raiz, *raiz);
printf("Valor guardado no novo nó: %d \n", (*raiz)->info);

printf("Valor guardado à esquerda da raiz: %p \n", (*raiz)->esq);
printf("Conteúdo guardado no endereço %p: %d \n\n", (*raiz)->esq, (*raiz)->esq->info);

printf("Valor guardado à esquerda da raiz: %p \n", (*raiz)->dir);
printf("Conteúdo guardado no endereço %p: %d \n\n", (*raiz)->dir, (*raiz)->dir->info);

libera_ArvBin(raiz); //limpa tudinho
raiz = NULL;

printf("No fim raiz fica igual a %p\n", raiz);

}