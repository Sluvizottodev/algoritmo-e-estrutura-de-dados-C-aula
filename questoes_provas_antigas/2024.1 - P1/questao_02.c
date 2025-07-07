struct _TPilha_ {
    int * valores;
    int tamanho;
};
typedef struct _TPilha_ TPilha;

int excluirDaPilha(TPilha *p) {
    if (p->tamanho == 0) {
        return -1; // Pilha vazia
    }

    p->tamanho--;
    p->valores = realloc(p->valores, p->tamanho * sizeof(int));
    return 1;
}