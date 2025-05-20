#include <stdio.h>
#define TAMANHO 100

typedef struct {
    int dados[TAMANHO];
    int inicio;
    int fim;
} Fila;

// Inicializa fila
void inicializar(Fila *f) {
    f->inicio = 0;
    f->fim = -1;
}

int estaVazia(Fila *f) {
    return f->inicio > f->fim;
}

int estaCheia(Fila *f) {
    return f->fim == TAMANHO - 1;
}

void enfileirar(Fila *f, int valor) {
    if (estaCheia(f)) {
        printf("Fila cheia!\n");
        return;
    }
    f->fim++;
    f->dados[f->fim] = valor;
}

int desenfileirar(Fila *f) {
    if (estaVazia(f)) {
        printf("Fila vazia!\n");
        return -1;
    }
    return f->dados[f->inicio++];
}

// Mostra o elemento da frente
int mostrarFrente(Fila *f) {
    if (estaVazia(f)) {
        printf("Fila vazia!\n");
        return -1;
    }
    return f->dados[f->inicio];
}
