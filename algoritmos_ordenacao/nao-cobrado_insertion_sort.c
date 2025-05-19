/*
Insertion Sort — estilo "cartas na mão"
Ideia:
Pega um elemento por vez e o insere no lugar certo na parte já ordenada do vetor.

Exemplo:
Lista: [5, 3, 4, 2]

Começa no 2º elemento (índice 1): 3 → insere antes do 5 → [3, 5, 4, 2]
4 → insere entre 3 e 5 → [3, 4, 5, 2]
2 → insere no começo → [2, 3, 4, 5]

Pseudocódigo:

para i de 1 até n-1
    eleito = A[i]
    j = i - 1
    enquanto j >= 0 e A[j] > eleito
        A[j+1] = A[j]
        j--
    A[j+1] = eleito
*/

//  Código em C:
void insertionSort(int *v, int n) {
    for (int i = 1; i < n; i++) {
        int eleito = v[i];
        int j = i - 1;
        while (j >= 0 && v[j] > eleito) {
            v[j + 1] = v[j];
            j--;
        }
        v[j + 1] = eleito;
    }
}

/*
Complexidade:
Melhor caso (quase ordenado): O(n)
Pior caso (inversamente ordenado): O(n²)
*/