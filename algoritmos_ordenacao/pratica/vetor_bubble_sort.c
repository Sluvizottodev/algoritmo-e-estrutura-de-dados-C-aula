#include <stdio.h>
#include <stdlib.h>

void bubbleSort(int *v, int n){
    //O primeiro for (com i) representa as passagens completas pelo vetor (quantas vezes vamos "borbulhar").
    for(int i= 0;i < n-1; i++){
        //O segundo for (com j) é onde ocorrem as comparações e trocas reais entre os elementos vizinhos.
        for(int j= 0; j < n-i-1; j++){
            //Se o elemento atual for maior que o próximo, trocamos eles de lugar.
            if(v[j] > v[j+1]){
                int aux = v[j];
                v[j] = v[j+1];
                v[j+1] = aux;
            }
        }
    }
}

int main(){
    int vetor[6] = {5, 3, 4, 2, 1, 0};

    printf("Digite os números a serem ordenados:\n");
    for(int i = 0; i< 6; i++){
        scanf("%d", &vetor[i]);
    }

    bubbleSort(vetor, 6);

    printf("Vetor ordenado:\n");
    for(int i = 0; i< 6; i++){
        printf("%d ", vetor[i]);
    }
    return 0;
}