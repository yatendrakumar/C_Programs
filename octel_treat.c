#include <stdio.h>
main()
{
    int a[] = {0001,0010,0100,1000};
    int i;

    for(i = 0; i < 4; i++)
    {
        printf("a[%d] : %d\n", i, a[i]);
    }
}
