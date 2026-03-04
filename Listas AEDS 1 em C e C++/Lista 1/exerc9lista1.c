#include <stdio.h>

int main()
{
    char simbolo;

    printf("Digite '0' para sair.\n");

    do
    {
        printf("Digite um símbolo: ");
        scanf(" %c", &simbolo); // O espaço antes do %c ignora espaços ou quebras de linha

        if (simbolo == '0')
        {
            printf("Saindo do programa...\n");
            break;
        }

        switch (simbolo)
        {
        case '<':
            printf("SINAL DE MENOR\n");
            break;
        case '>':
            printf("SINAL DE MAIOR\n");
            break;
        case '=':
            printf("SINAL DE IGUAL\n");
            break;
        default:
            printf("OUTRO SINAL\n");
            break;
        }

    } while (1); // Loop infinito até o usuário digitar '0'

    return 0;
}