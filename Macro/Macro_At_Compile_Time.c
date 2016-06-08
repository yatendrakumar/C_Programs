#include<stdio.h>

int main()
{
    #ifndef DEBUG
    printf("Macro not defined\n");
    #else
    // To define the macro at compile time you can compile the code with -D
    // option gcc -D DEBUG file.c
    printf("Macro is Defined\n");
    #endif
}
