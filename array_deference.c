#include <stdio.h>
#include <stdio.h>
int main(void)
{
    int a[5] = { 1, 2, 3, 4, 5 };
    int *ptr = (int*)(&a + 1);
    int *ptr2 = (int*)(a + 1);
    int *ptr3 = (int*)(&a[0] + 1);
    printf("%d %d %d %d\n", *(a + 1), *(ptr - 1), *(ptr2), *(ptr3));
    return 0;
}

