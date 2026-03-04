#include <stdio.h>

// procedimento que vai receber a média final de um aluno e exibir o conceito

void exibirconceito(int media)
{
    if (media <= 39)
    {
        printf("F\n");
    }
    else if (media <= 59)
    {
        printf("E\n");
    }
    else if (media <= 69)
    {
        printf("D\n");
    }
    else if (media <= 79)
    {
        printf("C\n");
    }
    else if (media <= 89)
    {
        printf("B\n");
    }
    else
    {
        printf("A\n");
    }
}

int main()
{
    int N, i, nota;

    // Faz a leitura de quantidade de alunos
    scanf("%d", &N);

    // Faz a leitura de cada média e vai chamando o procedimento
    for (i = 0; i < N; i++)
    {
        scanf("%d", &nota);
        exibirconceito(nota);
    }

    return 0;
}