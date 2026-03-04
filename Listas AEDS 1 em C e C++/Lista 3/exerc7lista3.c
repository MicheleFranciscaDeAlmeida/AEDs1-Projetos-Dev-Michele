#include <stdio.h>

int ehpositivo(int numero)
{
    if (numero > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int N;
    scanf("%d", &N);

    for (int i = 0; i < N; i++)
    {
        int valor;
        scanf("%d", &valor);

        if (ehpositivo(valor))
        {
            printf("SIM\n");
        }
        else
        {
            printf("NAO\n");
        }
    }

    return 0;
}