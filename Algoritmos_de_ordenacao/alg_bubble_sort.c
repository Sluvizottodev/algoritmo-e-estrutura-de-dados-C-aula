/*
1. Bubble Sort — o mais básico
Ideia:
Ele "borbulha" os maiores elementos para o fim. Compara pares vizinhos e troca se estiverem fora de ordem.

Exemplo (ordem crescente):
Vetor: [5, 3, 4, 2]

Passo 1:

Compara 5 e 3 → troca → [3, 5, 4, 2]
Compara 5 e 4 → troca → [3, 4, 5, 2]
Compara 5 e 2 → troca → [3, 4, 2, 5]

Passo 2:

Compara 3 e 4 → ok
Compara 4 e 2 → troca → [3, 2, 4, 5]
Compara 4 e 5 → ok
...até estar ordenado.

Pseudocódigo:
para i = 0 até n-1
   para j = 0 até n-2
      se A[j] > A[j+1]
         troca A[j] e A[j+1]

*/
//  Código em C:

void bubbleSort(int *v, int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-1; j++) {
            if (v[j] > v[j+1]) {
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}
/*
Complexidade:
Pior caso: O(n²)
Melhor caso (já ordenado): O(n²) também (poderia ser otimizado)
*/