#include<stdio.h>
#define Z 1
int main()
{
    const int a=0;
    const int b=2;
    const int c=3;
    enum assign{
        x=a,
        y=b,
        z=Z,
    };
    printf("x = %d, y = %d, z = %d\n", x, y, z);
    return 0;
}
// assignment.c: In function ‘main’:
// assignment.c:9:9: error: enumerator value for ‘x’ is not an integer constant
// assignment.c:10:9: error: enumerator value for ‘y’ is not an integer constant

