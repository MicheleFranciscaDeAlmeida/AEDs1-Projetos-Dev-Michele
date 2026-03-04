#include <stdio.h>

int mdc(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return mdc(b, a % b);

    }
 }

 int main() {

    int num1, num2;

    scanf("%d", &num1);

    scanf("%d", &num2);

    int resultado = mdc(num1, num2);

    printf("%d\n",resultado);

    return 0;
}
