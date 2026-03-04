#include <stdio.h>
#include <string.h>

#define totallojas 15

struct Loja {
    char nome[50];
    char telefone[20];
    float preco;
};

int main() {
    struct Loja lojas[totallojas];
    int i;
    float soma = 0, media;


    printf("Digite os dados das lojas (nome, telefone, preco): %d\n", totallojas);
    for(i = 0; i < totallojas; i++){
        printf("Loja:%d\n", i + 1);

        printf("Nome: ");
        scanf(" %[^\n]", lojas[i].nome);

        printf("Telefone: ");
        scanf(" %[^\n]", lojas[i].telefone);

        printf("Preco: ");
        scanf(" %f", &lojas[i].preco);

        soma += lojas[i].preco;
    }
    media = soma / totallojas;

    printf("A media dos precos cadastrados eh: %.2f\n", media);
    printf("Lojas com precos abaixo da media sao: \n");

    for(i = 0; i <totallojas; i++) {
        if(lojas[i].preco < media) {
            printf("Nome: %s\n", lojas[i].nome);
            printf("Telefone: %s\n", lojas[i].telefone);
     }
    }

    return 0;
  }
