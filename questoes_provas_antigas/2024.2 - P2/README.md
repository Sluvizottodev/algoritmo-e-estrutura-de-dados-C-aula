# Prova de Algoritmos e Estrutura de Dados — Fila e Pilha Dinâmicas

## Descrição:

Você precisa programar tipos e funções para manipular:

* Uma **fila de números inteiros**
* Uma **pilha de caracteres**

Essas duas estruturas de dados são **dinâmicas** e um nó de cada uma delas armazena uma informação em um campo identificado por `valor`.

---

## Código Inicial Fornecido:

### Função (a) Incluir um novo nó na fila com informação `v`

```c
int incluir (fila ** marcador, int v)
{
    fila *p , *np;
    p = (*(*marcador)).proximo;
    np = (fila*)malloc(sizeof(fila));
    if (np == NULL) return 0;
    (*(*marcador)).proximo = np;
    (*np).valor = v;
    (*np).proximo = p;
    return 1;
}
```

### Função (b) Excluir um nó da pilha

```c
int excluir (pilha ** marcador)
{
    pilha *p;
    if ((*marcador) != NULL)
    {
        p = (*(*marcador)).proximo;
        free(*marcador);
        *marcador = p;
        return 1;
    }
    return 0;
}
```

---

## Questões da Prova:

### 1) (1,5 pontos)

**Escreva um tipo para representar um nó da fila.**

### 2) (1,5 pontos)

**Escreva um tipo para representar um nó da pilha.**

### 3) (1,0 ponto)

**Escreva um sinônimo (`typedef`) para cada tipo criado nas questões anteriores, de tal modo que as funções já descritas acima compilem corretamente.**

### 4) (3,0 pontos)

**Escreva uma função para excluir um nó da fila.**

### 5) (3,0 pontos)

**Escreva uma função para incluir um nó na pilha.**
