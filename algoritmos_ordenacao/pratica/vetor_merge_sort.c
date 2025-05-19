#include <stdio.h>
//algoritmo recursivo de ordenação por intercalação

//Divide o vetor em duas metades, ordena cada metade 
void mergeSort(int *v, int inicio, int fim){//recebe vetor, inicio e fim
    int meio = (inicio + fim)/2;//meio do vetor
    if(inicio < fim){
        mergeSort(v, inicio, meio);//chama a função para a primeira metade
        mergeSort(v, meio + 1, fim);//chama a função para a segunda metade
        merge(v, inicio, meio, fim);//intercala as duas metades
    }
}

//é a função que junta esses pedaços em ordem.
void merge(int *v, int inicio, int meio, int fim){
    int n1= meio - inicio + 1;//tamanho do vetor da primeira metade
    int n2= fim - meio;//tamanho do vetor da segunda metade

//vetores temporários para armazenar as metades
    int *L = (int *)malloc(n1 * sizeof(int));
    int *R = (int *)malloc(n2 * sizeof(int));

    for(int i = 0; i < n1; i++){
//copia os elementos da primeira metade p/ vetor temporário
        L[i] = v[inicio + i];
    }
    for (int j = 0; j < n2; j++){
//copia os elementos da segunda metade p/ vetor temporário
        R[j] = v[meio + 1 + j];
    }

    int i = 0, j = 0, k = inicio;

    while (i < n1 && j < n2){
        if(L[i] <= R[j]){//compara elementos dos 2 vetores temporários
            v[k] = L[i];//se elemento da primeira metade < ou ==, coloca no vetor original
            i++;
        }else{
            v[k] = R[j];//se o elemento da segunda metade for menor, coloca no vetor original
            j++;
        }
        k++;
    }
//copia os elementos restantes da primeira metade
    while (i < n1){
        v[k] = L[i];
        i++; k++;
    }
//copia os elementos restantes da segunda metade
    while (j < n2){
        v[k] = R[j];
        j++; k++;
    }
}
