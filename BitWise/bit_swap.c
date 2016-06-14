#include<stdio.h>

int bit_swap(int s, int d, int n) 
{
    if((((1<<s)&n)>>s) != (((1<<d)&n)>>d))
        n = n^((1<<s)|(1<<d));
    return n;
}

int main()
{
    unsigned int a = 32; 
    printf("a = %xh\n", a);
    a = bit_swap(2, 5, a);
    printf("a = %xh\n", a);
}

