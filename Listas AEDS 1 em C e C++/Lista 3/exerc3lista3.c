#include <stdio.h>

// Procedimento para ordenar e mostrar 3 valores
void exibirOrdemCrescente(int a, int b, int c)
{
    int temp;

    // Ordenação simples
    if (a > b)
    {
        temp = a;
        a = b;
        b = temp;
    }
    if (a > c)
    {
        temp = a;
        a = c;
        c = temp;
    }
    if (b > c)
    {
        temp = b;
        b = c;
        c = temp;
    }

    // Exibir em ordem crescente
    printf("%d %d %d\n", a, b, c);
}

int main()
{
    int N, i;
    int x, y, z;

    // Leitura da quantidade de números que serão processados
    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %d %d", &x, &y, &z);
        exibirOrdemCrescente(x, y, z);
    }

    return 0;
}