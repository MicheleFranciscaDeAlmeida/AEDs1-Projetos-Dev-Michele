#include <stdio.h>

struct Retangulo
{
    float largura;
    float altura;
    float area;
};

void calculararea(struct Retangulo *r)
{
    r->area = r->largura * r->altura;
}

int main()
{
    int n;
    scanf("%d", &n);

    struct Retangulo r;

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &r.largura);
        scanf("%f", &r.altura);

        calculararea(&r);

        printf("A area do retangulo eh: %.2f\n", r.area);
    }

    return 0;
}