
#include <stdio.h>
struct test
{
    unsigned int x;
    unsigned int k;
//    long int y: 33;
    long int i: 22; 
//    long int k: 64;
    unsigned int z;
};
int main()
{
    struct test t;
    unsigned int *ptr1 = &t.x;
    unsigned int *ptr2 = &t.z;
    printf("%p\n", ptr1);
    printf("%p\n", ptr2);
    printf("%ld\n", ptr2 - ptr1);
    return 0;
}
