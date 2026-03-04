#include <stdio.h>

int main() {
    //declara valores
    int c, d, soma;

    //lê os dois valores
    scanf("%d %d", &c,&d);

    //faz a soma dos valores
    soma = c + d;
    soma = (soma >= 10) ? soma + 5 : soma + 7;

    //imprime a soma dos dois numeros inteiros
    printf("%d\n", soma); 

    return 0;
}