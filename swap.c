#include <stdio.h>
main()
{
    int a = 6;
    int b = 10;
    a = a + b;
    b = a - b;
    a = a - b;
    printf("a: %d, b: %d\n", a, b);
    a ^= b;
    b ^= a;
    a ^= b;
    printf("a: %d, b: %d\n", a, b);
}
