#include <stdio.h>

int main()
{
    int a, b, c, *pa = &a, *pb = &b, *pc = &c;

    scanf("%d %d %d", &a, &b, &c);
    printf("a %p %d\n", pa, *pa);
    printf("b %p %d\n", pb, *pb);
    printf("c %p %d\n", pc, *pc);

    return 0;
}