#include<stdio.h>
struct full_byte
{
    char first : 4;
    char second : 4;
};

union A
{
    char x;
    struct full_byte by;
};

main()
{
    char c = 10;
    union A a;
    a.x = c;
    printf("the two nibbles are: %d and %d\n", a.by.first, a.by.second);
}
