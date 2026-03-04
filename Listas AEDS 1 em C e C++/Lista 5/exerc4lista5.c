#include <stdio.h>

int main()
{
    int c, d, *pc = &c, *pd = &d;

    scanf("%d %d", &c, &d);

    if (pc > pd)
    {

        printf("Maior endereco: %p", pc, *pc);
    }
    else
    {

        printf("Maior endereco: %p", pd, *pd);
    }

    return 0;
}
