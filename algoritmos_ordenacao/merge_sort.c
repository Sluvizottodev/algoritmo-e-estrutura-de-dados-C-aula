/*
1. Merge Sort — ordenação por "dividir e conquistar"

Ideia:
Divide o vetor em duas metades, ordena cada metade recursivamente e depois **mescla** (merge) as duas partes já ordenadas.

Exemplo (ordem crescente):
Vetor: [5, 3, 4, 2]

Passo 1 — divide:
[5, 3]   e   [4, 2]

Passo 2 — divide mais:
[5] [3]     [4] [2]

Passo 3 — combina (merge):
[3, 5]   e   [2, 4]

Passo 4 — combina final:
[2, 3, 4, 5]

Pseudocódigo:
função mergeSort(vetor, início, fim):
   se início < fim:
      meio = (início + fim) / 2
      mergeSort(vetor, início, meio)
      mergeSort(vetor, meio+1, fim)
      merge(vetor, início, meio, fim)

função merge(vetor, início, meio, fim):
   cria vetores temporários com as duas metades
   compara e insere os menores de cada parte no vetor original
*/

// Código em C:
#include <stdio.h>
#include <stdlib.h>

void merge(int *v, int inicio, int meio, int fim) {
    int n1 = meio - inicio + 1;
    int n2 = fim - meio;

    int *esq = malloc(n1 * sizeof(int));
    int *dir = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) esq[i] = v[inicio + i];
    for (int j = 0; j < n2; j++) dir[j] = v[meio + 1 + j];

    int i = 0, j = 0, k = inicio;
    while (i < n1 && j < n2) {
        if (esq[i] <= dir[j]) {
            v[k++] = esq[i++];
        } else {
            v[k++] = dir[j++];
        }
    }

    while (i < n1) v[k++] = esq[i++];
    while (j < n2) v[k++] = dir[j++];

    free(esq);
    free(dir);
}

void mergeSort(int *v, int inicio, int fim) {
    if (inicio < fim) {
        int meio = (inicio + fim) / 2;
        mergeSort(v, inicio, meio);
        mergeSort(v, meio + 1, fim);
        merge(v, inicio, meio, fim);
    }
}

/*
Complexidade:
Pior caso: O(n log n)
Melhor caso: O(n log n)
Estável: sim
Memória extra: usa O(n) espaço extra para os vetores temporários

Características:
- Muito eficiente para grandes volumes de dados
- Utiliza recursão
- É um algoritmo do tipo “Dividir e Conquistar”

Exemplo de uso:

int main() {
    int v[] = {5, 3, 4, 2};
    int n = 4;

    mergeSort(v, 0, n - 1);

    for (int i = 0; i < n; i++) printf("%d ", v[i]);
    return 0;
}

Saída: 2 3 4 5
*/
