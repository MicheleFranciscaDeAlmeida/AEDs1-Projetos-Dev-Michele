#include <stdio.h>

int main()
{
    long int N;
    long int percentualPOSITIVOS, percentualNEGATIVOS, percentualZEROS;
    scanf("%ld", &N);

    long int valor;
    long int POSITIVOS = 0;
    long int NEGATIVOS = 0;
    long int ZEROS = 0;

    for (long int i = 0; i < N; i++)
    {
        scanf("%ld", &valor);
        if (valor > 0)
        {
            POSITIVOS++;
        }
        else if (valor < 0)
        {
            NEGATIVOS++;
        }
        else
        {
            ZEROS++;
        }
    }

    percentualPOSITIVOS = (POSITIVOS * 100) / N;
    percentualNEGATIVOS = (NEGATIVOS * 100) / N;
    percentualZEROS = (ZEROS * 100) / N;

    printf("%ld%% POSITIVOS\n", percentualPOSITIVOS);
    printf("%ld%% NEGATIVOS\n", percentualNEGATIVOS);
    printf("%ld%% ZEROS\n", percentualZEROS);

    return 0;
}