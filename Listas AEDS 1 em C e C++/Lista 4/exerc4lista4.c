#include <stdio.h>

int potencia (int a, int b) { //início da função recursiva para calcular a^b
    if (b == 0) { //caso base
        return 1;
    } else {
        return a * potencia(a, b - 1); //chamada recursiva
   }

 }

 int main() { //inicialização da função main
    int a,b;

    scanf("%d %d", &a, &b); //leitura dos valores de a e b

    printf("%d\n", potencia(a, b)); //impressão dos valores com potência de a e b

    return 0;

}
