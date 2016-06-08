#include<stdio.h>


#define sizeoff(x) ((void *) (&x+1) - (void *)(&x))


int main()
{
    short x;
    printf("Sizeof macro = %ld\n", sizeoff(x));
    printf("Sizeof macro = %ld\n", sizeof(x));
    printf("Sizeof macro = %ld\n", sizeof(x+1));
    char c;
    /*Sizeof is an operator not function. So, sizeof <variable_name> is a valid
    statement. But sizeof int is not. It will give you compilation error. Better
    to use sizeof(<variable_name/data_type>)  i.e. enclosed in parenthesis.*/
    printf("Size of c is %ld\n", sizeof c);
    return 0;
}
