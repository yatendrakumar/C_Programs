/*0xfb8011
*** Error in `./a.out': free(): invalid pointer: 0x0000000000fb8011 ***
Aborted (core dumped)
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *y = (char *)malloc(4);
    y++;
    free(y);
}
