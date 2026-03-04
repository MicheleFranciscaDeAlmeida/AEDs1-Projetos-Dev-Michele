#include <stdio.h>

char categoriaNadador(int idade) {
    if (idade >= 5 && idade <= 7)
    return 'F';
    else if (idade >= 8 && idade <= 10)
    return 'E';
    else if (idade >= 11 && idade <= 13)
    return 'D';
    else if (idade >= 14 && idade <= 15)
    return 'C';
    else if (idade >= 16 && idade <= 17)
    return 'B';
    else if (idade >= 18)
    return 'A';
    else
    return 'I'; // inválido
}

int main()
{
    int idade;
    int num;

    // Ler número de nadadores
    scanf("%d", &num);

    // Ler cada idade e imprimir a categoria
    for (int i = 0; i < num; i++) {
        scanf("%d", &idade);
        printf("%c\n", categoriaNadador(idade));
    }

    return 0;
}
