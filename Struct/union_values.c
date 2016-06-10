#include<stdio.h>
union test
{
    unsigned int x: 3;
    unsigned int y: 3;
    int z;
};

int main()
{ 
    union test t;
    t.x = 5;
    t.y = 4;
    t.z = 1;
// In union last value will be considered
    printf("t.x = %d, t.y = %d, t.z = %d",
            t.x, t.y, t.z);
    return 0;
}

// o/p: t.x = 1, t.y = 1, t.z = 1
