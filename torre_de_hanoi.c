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