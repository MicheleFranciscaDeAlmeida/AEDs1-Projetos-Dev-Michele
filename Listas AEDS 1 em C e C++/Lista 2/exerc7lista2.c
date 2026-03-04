#include <stdio.h>

int main()
{
    int L;
    scanf("%d", &L);

    int termo1 = 1, termo2 = 1, proximotermo;

    for (int i = 1; i <= L; i++)
    {
        if (i == 1 || i == 2)
            printf("1");
        else
        {
            proximotermo = termo1 + termo2;
            printf("%d", proximotermo);
            termo1 = termo2;
            termo2 = proximotermo;
        }

        if (i != L)
            printf(" ");
    }

    printf("\n");
    return 0;
}