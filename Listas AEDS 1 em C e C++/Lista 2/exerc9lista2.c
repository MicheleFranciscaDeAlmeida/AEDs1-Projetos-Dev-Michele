#include <stdio.h>

int main()
{
    // Declaração de variáveis
    double precocompra, precovenda;
    int lucromenor10 = 0, lucro10a20 = 0, lucromaior20 = 0;
    double totalcompra = 0, totalvenda = 0, lucrototal = 0;

    // Faz a leitura do primeiro par de preços
    scanf("%lf %lf", &precocompra, &precovenda);

    // Inicialização das estruturas de repetição
    while (precocompra != 0)
    {
        double lucropercentual = ((precovenda - precocompra) / precocompra) * 100;

        if (lucropercentual < 10)
        {
            lucromenor10++;
        }
        else if (lucropercentual <= 20)
        {
            lucro10a20++;
        }
        else
        {
            lucromaior20++;
        }

        totalcompra += precocompra;
        totalvenda += precovenda;
        lucrototal += precovenda - precocompra;

        // Faz a leitura do próximo par
        scanf("%lf %lf", &precocompra, &precovenda);
    }

    // Imprime os valores de cada lucro que o comerciante obteve
    printf("%d\n", lucromenor10);
    printf("%d\n", lucro10a20);
    printf("%d\n", lucromaior20);
    printf("%.2lf\n", totalcompra);
    printf("%.2lf\n", totalvenda);
    printf("%.2lf\n", lucrototal);

    return 0;
}