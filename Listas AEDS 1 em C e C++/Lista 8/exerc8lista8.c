#include <stdio.h>
#include <stdlib.h>

struct Moto
{
    float consumo; // km por litro
    float tanque;  // capacidade do tanque
};

int main()
{
    struct Moto m;
    int distancia;

    srand(6);
    distancia = rand() % 101; // 0 a 100 km

    printf("Distancia gerada: %d\n", distancia);

    scanf("%f", &m.consumo);
    scanf("%f", &m.tanque);

    float autonomia = m.consumo * m.tanque;

    int paradas = 0;

    if (autonomia < distancia)
    {
        float restante = distancia - autonomia;

        paradas = restante / autonomia;

        if (restante > paradas * autonomia)
            paradas++;
    }

    if (paradas == 0)
        printf("A moto nao precisa parar para abastecer\n");
    else
        printf("A moto precisa parar %d vezes para abastecer\n", paradas);

    return 0;
}
