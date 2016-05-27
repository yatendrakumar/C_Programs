#include<stdio.h>

// return type of entry function should be void
// it should end with _exit function
// compile it using gcc -e entry_point file.c

/*the -e flag changes the address of the startup code. Startup code
has the responsibility of returning to the OS again so it can perform its
process cleanup code and other bookkeeping stuff. 
The test() function simply returns;
but there is no place to return to and hence the segmentation fault.
*/

void hello_world()
{
    printf("Hello world\n");
    //return 0;
    _exit(0);
}

int main()
{
    printf("HHHHHH\n");
    return 0;
}
