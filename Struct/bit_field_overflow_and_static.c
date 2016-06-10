#include <stdio.h>
struct test
{
    unsigned int x: 2;
    unsigned int y: 2;
//    static unsigned int z: 2; // we can have static members in a structure/class, but bit fields cannot be static.
    static int xx;
};

int main()
{
    struct test t;
    t.x = 5; //  It is implementation defined to assign an out-of-range value to a bit field member. 
    printf("%d", t.x);
//    t.z = 5;
//   printf("%d", t.z);
    t.xx = 10;
    printf("%d", t.xx);
    return 0;
}
