/*/tmp/cc3JNiq5.o: In function `main':
extern.c:(.text+0x6): undefined reference to `var'
extern.c:(.text+0x10): undefined reference to `var'
collect2: ld returned 1 exit status
*/
// Compiler Error: var is not defined
#include <stdio.h>
extern int var;
int main()
{
    var = 10;
    printf("%d ", var);
    return 0;
}
