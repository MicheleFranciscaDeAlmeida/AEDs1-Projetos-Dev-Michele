#include <stdio.h>

int main()
{

    int voto;
    int candidato1 = 0, candidato2 = 0, candidato3 = 0, candidato4 = 0;
    int votosnulos = 0, votosbrancos = 0;

    scanf("%d", &voto);

    while (voto != 0)
    {
        if (voto == 1)
        {
            candidato1++;
        }
        else if (voto == 2)
        {
            candidato2++;
        }
        else if (voto == 3)
        {
            candidato3++;
        }
        else if (voto == 4)
        {
            candidato4++;
        }
        else if (voto == 5)
        {
            votosnulos++;
        }
        else if (voto == 6)
        {
            votosbrancos++;
        }
        scanf("%d", &voto);
    }

    printf("%d\n", candidato1);
    printf("%d\n", candidato2);
    printf("%d\n", candidato3);
    printf("%d\n", candidato4);
    printf("%d\n", votosnulos);
    printf("%d\n", votosbrancos);

    return 0;
}