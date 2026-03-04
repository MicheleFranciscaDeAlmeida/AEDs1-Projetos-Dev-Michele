#include <stdio.h>

int main() {
    
    int ano; 
    int idade;
    char perm;

    scanf("%d\n", &ano);
    scanf("%d\n", &idade);
    scanf(" %c\n", &perm);

    if (perm=='S') {
        idade = 2025 - ano;
    } 
    else {
        idade = 2025 - ano - 1;
    }

    printf ("%d\n",idade);

    if(idade>=18) {
        printf ("Pode dirigir\n");
    } 
    else {
        printf ("Nao pode dirigir\n");
    }

    return 0;

}