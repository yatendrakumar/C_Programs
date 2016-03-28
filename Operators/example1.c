#include<stdio.h>

int main() 
{
    int a, i = 1 ;
    a = i++;
    printf("a = %d\n",a);
    i = 1;
    a = i++ + 1;
    printf("a = %d\n",a);
    i = 1;
    a = i++ + i++;
    printf("a = %d\n",a);
    i = 1;
    a = ++i + i++;
    printf("a = %d\n",a);
    i = 1;
    a = ++i + ++i;
    printf("a = %d\n",a);
    return 0;
}
