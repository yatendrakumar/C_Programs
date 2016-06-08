#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *a;
    a = (int *)malloc(sizeof(int)*5);

    printf("address of a = %p\n", a);
    printf("size of a++ = %ld\n", sizeof(a));
    printf("size of a++ = %ld\n", sizeof(a++));
    printf("address of a = %p\n", a++);
    printf("address of a = %p\n", a);

}
