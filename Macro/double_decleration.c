#include<stdio.h>
#define DO_SOMETHING(x) \
    int i; \
    for(i = 0; i < 10; i++) \
    x += i; 

main()
{
    int i = 0;
    DO_SOMETHING(i);
    printf("\n%d", i + printf("1"));
}
