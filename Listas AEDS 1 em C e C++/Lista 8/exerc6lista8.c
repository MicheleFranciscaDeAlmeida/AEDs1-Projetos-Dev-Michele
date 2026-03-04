#include <stdio.h>

struct Ponto
{
    int x;
    int y;
};

int main()
{
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        struct Ponto A, B, C;

        scanf("%d %d", &A.x, &A.y);
        scanf("%d %d", &B.x, &B.y);
        scanf("%d %d", &C.x, &C.y);

        int vertical = 0;
        int horizontal = 0;

        if (A.x == B.x)
        {
            vertical++;
        }
        if (A.y == B.y)
        {
            horizontal++;
        }

        if (A.x == C.x)
        {
            vertical++;
        }
        if (A.y == C.y)
        {
            horizontal++;
        }

        if (B.x == C.x)
        {
            vertical++;
        }
        if (B.y == C.y)
        {
            horizontal++;
        }

        if (vertical == 0)
        {
            printf("Nao possui alinhamentos verticais\n");
        }
        else
        {
            printf("Alinhamentos verticais: %d\n", vertical);
        }

        if (horizontal == 0)
        {
            printf("Nao possui alinhamentos horizontais\n");
        }
        else
        {
            printf("Alinhamentos horizontais: %d\n", horizontal);
        }
    }
    return 0;
}