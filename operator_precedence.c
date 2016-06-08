#include <stdio.h>
int main(void)
{
    int a, b, c, d;
    a = 3;
    b = 5;
    c = a, b;
    d = (a, b);
    printf("c=%d ", c);
    printf("d=%d\n", d);
    return 0;
}
