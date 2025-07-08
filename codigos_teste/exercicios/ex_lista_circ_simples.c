//Inserir no início de uma lista circular simplesmente encadeada
#include <cstddef>

// recebe o ponteiro inicio (o primeiro da lista) e o valor
inserir_inicio(No* inicio, int valor){

    // cria um novo nó e atribui o valor nele
    No* novo = (No*)malloc(sizeof(No));
    novo->valor=valor;

    //se vazio, o novo nó aponta para ele, pq é cricular
    if(inicio == NULL){
        novo->prox = novo;
        return novo;
    }

    // caso a lista != vazio, percorre até o ultimo nó/o q aponta pra inicio
    No* p = inicio;
    while (p->prox != inicio){
        p = p->prox;
    }

    //fazemos o novo apontar para o antigo inicio
    novo->prox = inicio;
    p->prox = novo;
    return novo;
}

typedef struct no {
    int valor;
    struct no* prox;
} No;
