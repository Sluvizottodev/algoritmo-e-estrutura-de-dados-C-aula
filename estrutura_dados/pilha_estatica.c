#include <stdio.h>
#define MAX 100

typedef struct {
    int dados[MAX];
    int topo;
} Pilha;

// Inicializa a pilha
void inicializar(Pilha *p) {
    p->topo = -1;
}

// Verifica se vazia
int estaVazia(Pilha *p) {
    return p->topo == -1;
}

// Verifica se cheia
int estaCheia(Pilha *p) {
    return p->topo == MAX - 1;
}

// Empilha (push)
void empilhar(Pilha *p, int valor) {
    if (estaCheia(p)) {
        printf("Pilha cheia!\n");
        return;
    }
    p->topo++;
    p->dados[p->topo] = valor;
}

// Desempilha (pop)
int desempilhar(Pilha *p) {
    if (estaVazia(p)) {
        printf("Pilha vazia!\n");
        return -1; 
    }
    int valor = p->dados[p->topo];
    p->topo--;
    return valor;
}

// Mostra o elemento 
int topo(Pilha *p) {
    if (estaVazia(p)) {
        printf("Pilha vazia!\n");
        return -1;
    }
    return p->dados[p->topo];
}


int buscar(Pilha *p, int x) {
    for (int i = p->topo; i >= 0; i--) {
        if (p->dados[i] == x) {
            return i; 
        }
    }
    return -1; // não encontrou
}
