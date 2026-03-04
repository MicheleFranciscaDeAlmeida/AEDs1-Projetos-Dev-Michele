#include <stdio.h>

#define MAX 500

struct Cliente
{
    int codigo;
    char email[100];
    int horas;
    char pagina;
    float valor;
};

float calcularValor(int horas, char pagina)
{
    float valor;

    if (horas <= 20)
    {
        valor = 35.0;
    }
    else
    {
        valor = 35.0 + (horas - 20) * 2.5;
    }

    if (pagina == 'S' || pagina == 's')
    {
        valor += 40.0;
    }

    return valor;
}

int main()
{

    struct Cliente clientes[MAX];
    int n;

    printf("Quantos clientes deseja inserir (max 500)? ");
    scanf("%d", &n);

    if (n > MAX)
    {
        n = MAX;
    }

    for (int i = 0; i < n; i++)
    {

        scanf("%d", &clientes[i].codigo);
        scanf("%s", clientes[i].email);
        scanf("%d", &clientes[i].horas);
        scanf(" %c", &clientes[i].pagina);

        clientes[i].valor = calcularValor(clientes[i].horas, clientes[i].pagina);
    }

    for (int i = 0; i < n; i++)
    {
        printf("Cliente %d:\n", i + 1);
        printf("Codigo: %d\n", clientes[i].codigo);
        printf("E-mail: %s\n", clientes[i].email);
        printf("Horas de Acesso: %d\n", clientes[i].horas);
        printf("Possui Pagina: %c\n", clientes[i].pagina);
        printf("Valor a Pagar: %.2f Quanzas\n", clientes[i].valor);
    }

    return 0;
}
