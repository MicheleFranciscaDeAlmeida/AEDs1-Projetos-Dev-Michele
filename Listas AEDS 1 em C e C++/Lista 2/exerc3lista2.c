#include <stdio.h>

int main()
{
    float numeros[10];
    int i;
    int div3e9 = 0, div2 = 0, div5 = 0;

    for (i = 0; i < 10; i++)
    {
        scanf("%f", &numeros[i]);
    }

    for (i = 0; i < 10; i++)
    {
        int n = (int)numeros[i]; // converte para inteiro
        int ehDiv = 0;

        // Divisível por 3 e 9
        if (n % 9 == 0)
        {
            div3e9++;
            ehDiv = 1;
        }
        // Divisível por 2
        if (n % 2 == 0)
        {
            div2++;
            ehDiv = 1;
        }
        // Divisível por 5
        if (n % 5 == 0)
        {
            div5++;
            ehDiv = 1;
        }
        // Se não foi divisível por nenhum
        if (!ehDiv)
        {
            printf("Número não eh divisivel pelos valores\n");
        }
    }

    printf("%d Números são divisíveis por 3 e por 9\n", div3e9);
    printf("%d Números são divisíveis por 2\n", div2);
    printf("%d Números são divisíveis por 5\n", div5);

    return 0;
}