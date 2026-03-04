#include <stdio.h>

int main()
{
    char opcao;
    float salario, novosalario = 0;

    scanf(" %c", &opcao);
    scanf("%f", &salario);

    switch (opcao)
    {
    case 'A':
    
        printf("%.2f\n", salario * 1.08); // aumento de 8%
        break;

    case 'B':
    
        printf("%.2f\n", salario * 1.11); // aumento de 11%
        break;

    case 'C':
    
        if (salario <= 1000) {
            printf("%.2f\n", salario + 350);
        } else {
            printf("%.2f\n", salario + 200);
            break;
        }
    default:
        printf("Opcao invalida\n");
    }
    printf("%.2f\n", novosalario);

    return 0;

}