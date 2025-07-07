#define MAX 100
#include <stdio.h>
#include <stdlib.h>

struct _TPilha_ {
    int * valores;
    int tamanho;
};
typedef struct _TPilha_ TPilha;

int inserirNaPilha(TPilha *p, int x){
    if(buscarNaPilha(*p, x) != -1){
        return 0; // elemento já existe na pilha
    }
    if(p->tamanho == MAX - 1){
        return 0; // pilha cheia
    }

    p->valores[p->tamanho] = x;
    p->tamanho++;

//"."→ estrutura comum
//"->"→ ponteiro para estrutura

    return 1; 
}