# Prova de Algoritmos e Estrutura de Dados

## Descrição:

Você dispõe da seguinte listagem de código:

```c
#include <stdlib.h>
#include <stdio.h>

struct _TPilha_ {
    int * valores;
    int tamanho;
};
typedef _TPilha_ TPilha;

void criarPilha (TPilha *p);
int buscarNaPilha (TPilha p, int x);
int inserirNaPilha (TPilha *p, int x);
int excluirDaPilha (TPilha *p);
void eliminarPilha (TPilha *p);
void imprimirPilha (TPilha p);

void criarPilha(TPilha *p){
    (*p).valores = NULL;
    (*p).tamanho = 0;
}

int buscarNaPilha(TPilha p, int x){
    int i, busca;
    busca = -1; //flag para erro
    for (i=0; i <= p.tamanho-1; i = i + 1)
        if (p.valores[i] == x){
            busca = i;
            break;
        }
    return busca;
}

void eliminarPilha(TPilha *p){
    (*p).tamanho = 0;
    free((*p).valores);
    (*p).valores = NULL;
}

void imprimirPilha(TPilha p){
    int i;
    for(i = 0; i < p.tamanho; i++)
        printf("%d ", p.valores[i]);
}
```

Repare que o tipo `TPilha` registra como dados de uma pilha:

* Um ponteiro para uma coleção de valores inteiros
* O tamanho dessa coleção

A função `criarPilha` “aterra” esse ponteiro e determina que o tamanho da coleção dos valores apontados é igual a zero.

Em contrapartida, a função `eliminarPilha` ajusta o tamanho da pilha em questão para zero, libera todo o espaço de memória já alocado para os valores armazenados na pilha e, finalmente, “aterra” o ponteiro para essa coleção.

---

## Funções de Manipulação de Memória:

### malloc

Essa função é responsável por alocar uma área de memória:

```c
id = (tipo *)malloc(sizeof(tipo));
```

* `id` é uma variável apontadora
* `tipo` é o tipo de um dado que será apontado

### realloc

Essa função altera o espaço de memória que está sendo apontado por um ponteiro:

```c
id = realloc(id, novoTamanho);
```

* `id` já aponta para uma área de memória
* `novoTamanho` é o novo tamanho dessa área de memória

---

## Questões da Prova:

### 1) (2,5 pontos)

**Implemente a função `inserirNaPilha`.**
Essa função deve inserir o elemento `x` na pilha, apenas se o mesmo ainda não estiver nela presente.

### 2) (2,5 pontos)

**Implemente a função `excluirDaPilha`.**
Essa função deve excluir um elemento da pilha, apenas se ela não encontrar-se vazia.

### 3) (2,0 pontos)

**Determine e justifique a complexidade de todas as 6 (seis) funções cujas assinaturas foram apresentadas nas linhas de código acima.**

### 4) (2,0 pontos)

**Implemente o algoritmo de ordenação conhecido como Bubble Sort.**

### 5) (1,0 ponto)

**Determine e justifique a complexidade do algoritmo Bubble Sort, em consonância com a implementação solicitada na questão anterior.**
