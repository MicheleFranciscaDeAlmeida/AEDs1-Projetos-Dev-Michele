#include <stdio.h>

int main()
{
    int L;

    scanf("%d", &L);

    int termo1 = 1, termo2 = 1, proximotermo;

    // Imprime o primeiro termo
    if (termo1 < L)
    {

        printf("%d", termo1);
    }

    // Imprime o segundo termo
    if (termo2 < L)
    {

        printf(" %d", termo2);
    }

    // Calcula os próximos termos sem usar break
    proximotermo = termo1 + termo2;

    while (proximotermo < L)
    {

        printf(" %d", proximotermo);

        termo1 = termo2;

        termo2 = proximotermo;

        proximotermo = termo1 + termo2;
    }

    printf("\n");

    return 0;
}