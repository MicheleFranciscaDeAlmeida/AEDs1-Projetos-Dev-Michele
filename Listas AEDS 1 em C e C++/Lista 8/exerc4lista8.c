#include <stdio.h>
#include <string.h>
#define MAX 1500

struct Livro
{
    int codigo;
    char doacao;
    char nome[100];
    char autor[100];
    char editora[100];
    int area;
};

int main()
{
    struct Livro livro;
    int codigoconsulta;
    int areaconsulta;

    scanf("%d", &livro.codigo);

    if (livro.codigo != -1)
    {
        scanf(" %c", &livro.doacao);
        scanf("%s", livro.nome);
        scanf("%s", &livro.autor);
        scanf("%s", &livro.editora);
        scanf("%s", &livro.area);
    }

    scanf("%d", &codigoconsulta);

    if (codigoconsulta == livro.codigo)
    {
        if (areaconsulta == 1)
        {
            printf("Area: Exatas\n");
        }
        else if (areaconsulta == 2)
        {
            printf("Area: Humanas\n");
        }
        else if (areaconsulta == 3)
        {
            printf("Area:Biologicas\n");
        }
    }
    else
    {
        printf("Livro nao encontrado");
    }

    return 0;
}