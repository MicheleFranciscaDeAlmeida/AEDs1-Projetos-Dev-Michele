#include <stdio.h>
#include <string.h>

struct Aluno
{                      // Definição da estrutura de dados (struct)
    char nome[50];     // Declaração de caractere para nome com limite de 50 caracteres
    int matricula;     // Declaração de uma variável inteira para matricula do aluno
    float mensalidade; // Inicializando variável de ponto flutuante para mensalidade do aluno
    float nota1;       // Inicializando variável de ponto flutuante para primeira nota do aluno
    float nota2;       // Inicializando variável de ponto flutuante para segunda nota do aluno
    float media;       // Declarando variável de ponto flutuante para obter a média das duas notas do aluno
};

int main()
{ // Inicializando a função main
    struct Aluno aluno;
    { // Inicializando a estrutura de dados (struct)

        // Utilização do operador.para acessar membros individuais da estrutura
        aluno.matricula = 987695;
        aluno.nota1 = 6.80;
        aluno.nota2 = 8.90;

        // Utilização de strncpy para garantir que não ocorra estouro de buffer
        strncpy(aluno.nome, "Jussara Fonseca", sizeof(aluno.nome) - 1);
        aluno.nome[sizeof(aluno.nome) - 1] = '\0';

        // Cálculo da média das notas 1 e 2 do aluno
        aluno.media = (aluno.nota1 + aluno.nota2) / 2.0;

        // Impressão de dados e resultado da média do aluno
        printf("Dados do Aluno:\n");
        printf("Nome: %s\n", aluno.nome);
        printf("Matricula: %d\n", aluno.matricula);
        printf("Media: %.2f\n", aluno.media);

        // Retorna o valor de 0 e encerra o código
        return 0;
    }
}
