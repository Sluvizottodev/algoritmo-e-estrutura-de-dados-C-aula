/*Quick Sort — rápido e eficiente
Ideia:
Escolhe um pivô, coloca todos menores à esquerda e maiores à direita, e repete isso nas partes menores.

Exemplo (vetor: [5, 3, 8, 4, 2, 7])
Pivô = 5
Menores que 5: [3, 4, 2]
Maiores que 5: [8, 7]
Recursivamente ordena essas partes

Resultado: [2, 3, 4, 5, 7, 8]

Pseudocódigo:

função quickSort(A, inicio, fim)
    se inicio < fim
        p = partição(A, inicio, fim)
        quickSort(A, inicio, p-1)
        quickSort(A, p+1, fim)
Partição:
Coloca o pivô no lugar certo e reorganiza o vetor em torno dele.
*/

//  Código em C:

int particiona(int *v, int inicio, int fim) {
    int pivô = v[fim];
    int i = inicio - 1;
    for (int j = inicio; j < fim; j++) {
        if (v[j] <= pivô) {
            i++;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    int temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;
    return i + 1;
}

void quickSort(int *v, int inicio, int fim) {
    if (inicio < fim) {
        int p = particiona(v, inicio, fim);
        quickSort(v, inicio, p - 1);
        quickSort(v, p + 1, fim);
    }
}

/*
Complexidade:

Melhor caso: O(n log n)
Pior caso (vetor já ordenado, sem otimização): O(n²)
Muito usado na prática com otimizações
*/