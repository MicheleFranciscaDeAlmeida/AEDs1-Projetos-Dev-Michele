#include <stdio.h>

float mediaAprovados(int n)
{
    float nota, soma = 0;
    int aprovados = 0;

    for (int i = 0; i < n; i++)
    {
        scanf("%f", &nota); // Leitura da nota do aluno

        if (nota >= 6.0)
        { // Consideração apenas os aprovados
            soma += nota;
            aprovados++;
        }
    }

    if (aprovados == 0)
    {
        return 0;
    }

    return soma / aprovados; // Retorna o valor da média
}

int main()
{
    int numAlunos;
    float media;

    scanf("%d", &numAlunos); // Leitura do número de alunos
    media = mediaAprovados(numAlunos);

    printf("%.1f\n", media); // Impressão da média com 1 casa decimal

    return 0;
}