#include <stdio.h>

int main() {
    int matriz[2][3];
    int R[2][3];
    int i, j, maior;

    // LEITURA DA MATRIZ
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }

    // ENCONTRAR O MAIOR VALOR
    maior = matriz[0][0];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
            }
        }
    }

    // MONTAR A MATRIZ R
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            R[i][j] = matriz[i][j] * maior;
        }
    }


    printf("Matriz R eh:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", R[i][j]);
        }
        printf("\n");
    }

    return 0;
}
