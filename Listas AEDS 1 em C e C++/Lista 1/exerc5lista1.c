#include <stdio.h>

int main()
{
    float diaria, diariapromocional, totalpromocao, totalnormal, diferenca;

    scanf("%f", &diaria);

    diariapromocional = diaria * 0.75;            // desconto de 25%
    totalpromocao = diariapromocional * 80 * 0.8; // 80% de 80 quartos
    totalnormal = diaria * 80 * 0.5;              // 50% de 80 quartos
    diferenca = totalpromocao - totalnormal;

    printf("Valor promocional: %.2f\n", diariapromocional);
    printf("Promocional com 80%% ocupado: %.2f\n", totalpromocao);
    printf("Normal com 50%% ocupado: %.2f\n", totalnormal);
    printf("Diferenca entre os valores: %.2f\n", diferenca);

    return 0;
}
