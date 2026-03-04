#include <stdio.h>

struct Cliente
{
    char nome[50];
    char endereco[50];
    char telefone[30];
};

int main() {
    struct Cliente c1, c2;
    {
    //cadastro do cliente 1.
        scanf("%s", c1.nome);
        scanf("%s", c1.endereco);
        scanf("%s", c1.telefone);
    
    //cadastro do cliente 2.
        scanf("%s", c2.nome);
        scanf("%s", c2.endereco);
        scanf("%s", c2.telefone);
    };
    //Impressao de nome, endereço e telefone dos dois clientes cadastrados.
    printf("%s %s %s\n", c1.nome, c1.endereco, c1.telefone);
    printf("%s %s %s\n", c2.nome, c2.endereco, c2.telefone); 

    return 0;
    }