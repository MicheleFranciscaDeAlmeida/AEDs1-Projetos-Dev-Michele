#include <stdio.h>

// Procedimento para verificar e exibir o tipo de triângulo
void verificarTriangulo(float x, float y, float z)
{
    if (x < y + z && y < x + z && z < x + y)
    {
        if (x == y && y == z)
        {
            printf("TRIANGULO EQUILATERO\n");
        }
        else if (x == y || x == z || y == z)
        {
            printf("TRIANGULO ISOSCELES\n");
        }
        else
        {
            printf("TRIANGULO ESCALENO\n");
        }
    }
    else
    {
        printf("NAO TRIANGULO\n");
    }
}

int main()
{
    float a, b, c;

    // Primeira leitura
    scanf("%f %f %f", &a, &b, &c);

    // Enquanto todos os lados forem não-negativos
    while (a >= 0 && b >= 0 && c >= 0)
    {
        verificarTriangulo(a, b, c);

        // Próxima leitura
        scanf("%f %f %f", &a, &b, &c);
    }

    return 0;
}
