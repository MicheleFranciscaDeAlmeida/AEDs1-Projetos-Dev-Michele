#include <stdio.h>

int main() {
    float num1, num2, resultado;
    int opcao;

    do {
        printf("\nCalculadora: ");
    
        printf("\n1 - Soma: ");
        printf("\n2 - Subtracao: ");
        printf("\n3 - Multiplicacao: ");
        printf("\n4 - Divisao: ");
        printf("\n0 - Sair: ");
        printf("\nEscolha uma opcao: ");
        scanf("%d", &opcao);

        if(opcao!=0) {
        printf("\nDigite o primeiro numero: ");
        scanf("%f", &num1);
        printf("\nDigite o segundo numero: ");
        scanf("%f", &num2);

        
        switch (opcao) {

            case 1:
                resultado = num1 + num2;
                break;

            case 2:
                resultado = num1 - num2;
                break;

            case 3:
                resultado = num1 * num2;
                break;

            case 4:
                if (num2 == 0) {
                        printf("Numero invalido!\n");
                        break;
                    
                }
                resultado = num1/num2;
                break;

            default:
                printf("Opcao invalida!\n");
            break;
        }
    printf("Resultado: %.2f\n", resultado);
    }else{
        printf("\nSaindo da calculadora:");
    }
    
    } while (opcao != 0);

    return 0;
}