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

    int L[n1], R[n2];//vetores temporários para armazenar as metades

    for(int i = 0; i < n1; i++){
        L[i] = v[inicio + i];//copia os elementos da primeira metade para o vetor temporário
    }
    for (int j = 0; j < n2; j++){
        R[j] = v[meio + 1 + j];//copia os elementos da segunda metade para o vetor temporário
    }
}
