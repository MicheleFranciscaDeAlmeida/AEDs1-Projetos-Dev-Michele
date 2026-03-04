#include <stdio.h>
#include <string.h>
#define totalpessoas 40

struct Pessoa {

    char nome [50];
    int dia;
    int mes;
    };

int main() {

    struct Pessoa pessoas [totalpessoas];
    int i, mesatual;

    printf("Digite os dados das pessoas (nome dia mes): %d\n", totalpessoas);

    for(i = 0; i < totalpessoas; i++) {
        scanf("%s %d %d", pessoas[i].nome, &pessoas[i].dia, &pessoas[i].mes);
    }

    for(mesatual = 1; mesatual <= 12; mesatual++) {
        int temaniversariante = 0;
        printf("Aniversariantes do mes: %d\n", mesatual);

    for(i = 0; i < totalpessoas; i++) {
        if(pessoas[i].mes == mesatual) {
            printf("Nome: %s, Dia: %d\n", pessoas[i].nome, pessoas[i].dia);
            temaniversariante = 1;
        }

      }

       if(!temaniversariante) {
            printf("Nenhum aniversariante neste mes. \n");
        }
    }

    return 0;

    }
