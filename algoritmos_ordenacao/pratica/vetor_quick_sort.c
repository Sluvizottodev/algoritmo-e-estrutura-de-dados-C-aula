#include <stdio.h>
//trocar posicao
void trocar(int *a, int *b){
    int temp = *a;
    *a=*b;
    *b = temp;
}

int particionar(int *v, int inicio, int fim){
    int pivo = v[fim];//escolhe o último elemento como pivô
    int i = inicio - 1;//índice do menor elemento
    for (int j = inicio; j < fim; j++){
        if(v[j] <= pivo){
            i++;
            trocar(&v[i], &v[j]);
        }
    }
    trocar(&v[i + 1], &v[fim]);//troca o pivô com o elemento na posição i + 1
    return i + 1;//retorna o índice do pivô
}

void quickSort(int *v, int inicio, int fim){
    if(inicio < fim){
        int pivo = particionar(v, inicio, fim);
        quickSort(v, inicio, pivo - 1);//chama a função para a parte esquerda
        quickSort(v, pivo + 1, fim);//chama a função para a parte direita
    }
}

// Função para imprimir o vetor
void imprimir(int v[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", v[i]);
    }
    printf("\n");
}

int main() {
    int v[] = {9, 3, 7, 1, 5, 2, 8};
    int n = sizeof(v) / sizeof(v[0]);

    printf("Antes:\n");
    imprimir(v, n);

    quickSort(v, 0, n - 1);

    printf("Depois:\n");
    imprimir(v, n);

    return 0;
}
