
/*
Define a function with its last parameter as ellipses and the one just before the ellipses is always an int which will represent the number of arguments.

Create a va_list type variable in the function definition. This type is defined in stdarg.h header file.

Use int parameter and va_start macro to initialize the va_list variable to an argument list. The macro va_start is defined in stdarg.h header file.

Use va_arg macro and va_list variable to access each item in argument list.

Use a macro va_end to clean up the memory assigned to va_list variable.
*/


#include <stdio.h>
#include <stdarg.h>

double average(int num,...) {

    va_list valist;
    double sum = 0.0;
    int i;

    /* initialize valist for num number of arguments */
    va_start(valist, num);

    /* access all the arguments assigned to valist */
    for (i = 0; i < num; i++) {
        sum += va_arg(valist, int);
    }

    /* clean memory reserved for valist */
    va_end(valist);

    return sum/num;
}

int main() {
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2,3,4,5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5,10,15));
}
