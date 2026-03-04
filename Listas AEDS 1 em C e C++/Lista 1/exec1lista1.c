#include <stdio.h>

int main() {
    //declara os dois numeros inteiros a e b
    int a, b;
    
    //lê os dois numeros inteiros de a e de b
    scanf("%d %d", &a, &b);

    //verifica e imprimi o numero maior
  if (a > b) {
    printf("%d\n", a);

  } else {
    printf("%d\n", b);
  }

  return 0;

}