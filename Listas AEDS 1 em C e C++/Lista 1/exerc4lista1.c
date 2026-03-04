#include <stdio.h>

int main() {
    float nota;

    scanf("%f", &nota);

    if (nota >= 8 && nota <= 10) {
        printf("Otimo\n");
    }
    else if (nota >= 7 && nota < 8) {
        printf("Bom\n");
    }
    else if (nota >= 5 && nota < 7) {
        printf("Regular\n");
    }
    else if (nota < 5 && nota >= 0) {
        printf("Insatisfatorio\n");
    }
    else {
        printf("Nota invalida\n");
    }

    return 0;
}