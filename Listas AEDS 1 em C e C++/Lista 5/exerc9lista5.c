#include <stdio.h>

int main()
{
    int x, *p, **q;

    p = &x; // p recebe o endereço de x
    q = &p; // q recebe o endereço de p
    x = 10; // x recebe o valor 10

// O erro do código no enunciado era neste printf onde o &q pega o endereço de memória da variável q.
// A variável q é um ponteiro para ponteiro, então &q é o endereço onde esse ponteiro q fica armazenado.
    printf("\n%d\n", **q);

    return (0);
}
