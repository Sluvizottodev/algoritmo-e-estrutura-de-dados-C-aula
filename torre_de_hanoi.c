#include <stdio.h>
#include <stdlib.h>

void moveDisks (int n, char source, char dest, char aux){
    if(n == 1){
        printf("Mova o disco 1 de %c para %c\n", source, dest);
        return;
    }

    moveDisks(n-1, source, aux, dest);
    printf("Mova o disco %d de %c para %c\n", n, source, dest);

    moveDisks(n-1, aux, dest, source);
}

int main(){
    int n;
    printf("Digite o número de discos: ");
    scanf("%d", &n);
    moveDisks(n, 'A', 'C', 'B');
    return 0;
}
/*
Desafio da Torre de Hanoi!
São 2 regras:
  1. Você só pode mover um disco por vez.
  2. Um disco maior nunca pode ser colocado em cima de um disco menor.

-Essa função principal move n discos da torre source para a torre dest, usando a torre aux como apoio.

# Funcionamento:
Etapa 1: A -> C
Etapa 2: A -> B
Etapa 3: C -> B
Etapa 4: A -> C
Etapa 5: B -> A
Etapa 6: B -> C
Etapa 7: A -> C

*/