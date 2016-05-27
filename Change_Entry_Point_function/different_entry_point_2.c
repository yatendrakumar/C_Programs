/*
If you are on a system that provides GNU Binutils (like Linux), you can use
the objcopy command to make an arbitrary function the new entry point.

Suppose a file called program.c containing the entry function:

$ cat > program.c
#include <stdio.h>
int entry()
{
    return 0;
}

You first compile it using -c to generate a relocatable object file:
    $ gcc -c program.c -o program.o
Then you redefine entry to be main:
    $ objcopy --redefine-sym entry=main program.o
Now use gcc to compile the new object file:
    $ gcc program.o -o program

NOTE: If your program already has a function
called main, before step 2, you can do a
separate objcopy invocation:
    objcopy --redefine-sym oldmain=main program.o
*/

#include <stdio.h>
int entry()
{
    printf("Hello world\n");
    return 0;
}
