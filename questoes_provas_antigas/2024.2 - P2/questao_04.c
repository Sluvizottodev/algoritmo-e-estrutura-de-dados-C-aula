#include <cstddef>
int excluir_fila(No* sentinela){
    No* primeiro = sentinela->proximo; 
    if(primeiro == NULL){
        return 0;
    }
    sentinela->proximo = primeiro->proximo;
    free(primeiro);
    return 1;
}