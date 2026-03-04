#include <stdio.h>

int main()
{
    int velocidade_maxima, velocidade_motorista, excesso;

    // Leitura das velocidades
    scanf("%d", &velocidade_maxima);
    scanf("%d", &velocidade_motorista);

    // Calcula excesso de velocidade
    excesso = velocidade_motorista - velocidade_maxima;

    if (excesso <= 0)
    {
        printf("Motorista respeitou a lei\n");
    }
    else if (excesso <= 10)
    {
        printf("Multa de 50 reais\n");
    }
    else if (excesso <= 30)
    {
        printf("Multa de 100 reais\n");
    }
    else
    {
        printf("Multa de 200 reais\n");
    }

    return 0;
}