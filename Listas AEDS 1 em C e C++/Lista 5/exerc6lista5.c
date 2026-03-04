#include <stdio.h>

int main() {
    //Declaração das variáveis e ponteiros
    int   inteiro   = 10;
    float real      = 9.99f;
    char  caractere = 'A';

    int   *p_inteiro   = &inteiro;
    float *p_real      = &real;
    char  *p_caractere = &caractere;

    //Exibição do estado inicial
    printf("--- ANTES DA ALTERACAO ---\n\n");
    printf("Conteudo 'inteiro': %d, Endereco 'inteiro': %p\n", inteiro, &inteiro);
    printf("Conteudo 'p_inteiro': %p, Endereco 'p_inteiro': %p\n\n", p_inteiro, &p_inteiro);

    printf("Conteudo 'real': %.2f, Endereco 'real': %p\n", real, &real);
    printf("Conteudo 'p_real': %p, Endereco 'p_real': %p\n\n", p_real, &p_real);

    printf("Conteudo 'caractere': %c, Endereco 'caractere': %p\n", caractere, &caractere);
    printf("Conteudo 'p_caractere': %p, Endereco 'p_caractere': %p\n\n", p_caractere, &p_caractere);

    //Solicitação de novos dados
    printf("----------------------------------------\n");
    printf("Digite um novo valor inteiro: ");
    scanf("%d", p_inteiro);

    printf("Digite um novo valor real: ");
    scanf("%f", p_real);

    printf("Digite um novo caractere: ");
    scanf(" %c", p_caractere);

    //Exibição do estado final
    printf("\n\n--- DEPOIS DA ALTERACAO ---\n\n");
    printf("Conteudo 'inteiro': %d, Endereco 'inteiro': %p\n", inteiro, &inteiro);
    printf("Conteudo 'p_inteiro': %p, Endereco 'p_inteiro': %p\n\n", p_inteiro, &p_inteiro);

    printf("Conteudo 'real': %.2f, Endereco 'real': %p\n", real, &real);
    printf("Conteudo 'p_real': %p, Endereco 'p_real': %p\n\n", p_real, &p_real);

    printf("Conteudo 'caractere': %c, Endereco 'caractere': %p\n", caractere, &caractere);
    printf("Conteudo 'p_caractere': %p, Endereco 'p_caractere': %p\n\n", p_caractere, &p_caractere);

    return 0;
}
