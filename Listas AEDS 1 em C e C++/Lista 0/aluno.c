#include <stdio.h>
#include <string.h>

struct Aluno {
       char nome[50];
       int matricula;
       float mensalidade;
       float nota1;
       float nota2;
       float media;
};

int main() {
    struct Aluno aluno;{

    aluno.matricula = 987695;
    aluno.nota1 = 6.80;
    aluno.nota2 = 8.90;

    strncpy(aluno.nome, "Jose Maria", sizeof(aluno.nome) -1);
    aluno.nome[sizeof(aluno.nome) -1] = '\0';

    aluno.media = (aluno.nota1 + aluno.nota2) / 2.0;

    printf("Dados do Aluno:\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matricula: %d\n", aluno.matricula);
    printf("Media: %.2f\n", aluno.media);

    return 0;
}
}
