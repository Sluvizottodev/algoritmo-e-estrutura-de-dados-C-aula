#include <cstddef>
typedef struct no{
    int valor;
    struct no *proximo;
}No;

No* criar_lista(){
    No* sentinela = No*(malloc(sizeof(No)));
        sentinela->proximo = NULL;
    return sentinela;
}

void inserir(No* sentinela, int valor){
    No* novo = (No*)malloc(sizeof(No));
    novo->valor;
}

void inserir (No* sentinela, int valor){
    No* novo = (No*)malloc(sizeof(No));
    novo->valor = valor;
    novo->proximo = NULL;
    No* atual = sentinela;
    while (atual->proximo !=NULL){
        atual = atual->proximo;
    }
    atual->proximo = novo;
}