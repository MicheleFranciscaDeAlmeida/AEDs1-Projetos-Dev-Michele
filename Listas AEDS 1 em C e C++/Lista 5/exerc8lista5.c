#include <stdio.h>

/**
 * @brief Encontra os divisores de um número, determina se é primo e atualiza ele
 * os valores do menor e maior divisor.
 * * @param n O número a ser analisado (passado por valor).
 * @param min Ponteiro para a variável que armazenará o menor divisor (passado por referência).
 * @param max Ponteiro para a variável que armazenará o maior divisor (passado por referência).
 * @return int Retorna 0 se n for primo, 1 caso contrário.
 */
int divisores(int n, int *min, int *max) {
    int i;
    int contador_divisores = 0;
    int primeiro_divisor_encontrado = 0; // Flag para controlar o primeiro divisor

    // Um número menor que 2 não é primo e não tem divisores no intervalo pedido.
    if (n < 2) {
        return 0; // Convencionalmente, trataremos como "primo" para este problema.
    }

    // Loop para procurar divisores de 2 até n-1
    for (i = 2; i < n; i++) {
        // Verifica se 'i' é um divisor de 'n'
        if (n % i == 0) {
            contador_divisores++;

            // Se for o primeiro divisor que encontramos
            if (primeiro_divisor_encontrado == 0) {
                *min = i; // Armazena 'i' no endereço de memória apontado por 'min'
                primeiro_divisor_encontrado = 1; // Ativa a flag
            }

            // Independentemente de ser o primeiro ou não, este 'i' é o maior
            // divisor encontrado até o momento no loop.
            *max = i; // Armazena 'i' no endereço de memória apontado por 'max'
        }
    }

    // Após o loop, verificamos se algum divisor foi encontrado
    if (contador_divisores == 0) {
        return 0; // Nenhum divisor encontrado, então n é primo
    } else {
        return 1; // Divisores foram encontrados, então n não é primo
    }
}

// --- Função principal para testar a função divisores ---
int main() {
    int numero;
    int menor_divisor, maior_divisor;
    int resultado;

    // Inicializando as variáveis com um valor padrão
    menor_divisor = 0;
    maior_divisor = 0;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    // Chama a função 'divisores', passando o número e os ENDEREÇOS das variáveis
    resultado = divisores(numero, &menor_divisor, &maior_divisor);

    // Interpreta o resultado retornado pela função
    if (resultado == 0) {
        printf("\nO numero %d e primo.\n", numero);
    } else {
        printf("\nO numero %d NAO e primo.\n", numero);
        printf("Seu menor divisor (sem contar 1) e: %d\n", menor_divisor);
        printf("Seu maior divisor (sem contar o proprio numero) e: %d\n", maior_divisor);
    }

    return 0;
}
