#include <stdio.h>

int main()
{
    float salario, somasalarios = 0.0, maiorsalario = 0.0;
    int numerofilhos, somafilhos = 0, totalhabitantes = 0, salarioatecem = 0, mediafilhos;

    scanf("%f", &salario);

    while (salario >= 0)
    {
        scanf("%d", &numerofilhos);

        somasalarios += salario;
        somafilhos += numerofilhos;
        totalhabitantes++;

        if (salario > maiorsalario)
        {
            maiorsalario = salario;
        }

        if (salario <= 100.0)
        {
            salarioatecem++;
        }

        scanf("%f", &salario);
    }

    if (totalhabitantes > 0)
    {
        float mediasalario = somasalarios / totalhabitantes;
        mediafilhos = (float)somafilhos / totalhabitantes;
        float percentualcem = ((float)salarioatecem / totalhabitantes) * 100.0;

        printf("%.2f\n", mediasalario);
        printf("%d\n", (int)mediafilhos);
        printf("%.2f\n", maiorsalario);
        printf("%.2f\n", percentualcem);
    }
    else
    {
        printf("Nenhum dado foi inserido.\n");
    }

    return 0;
}