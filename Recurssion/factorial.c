#include<stdio.h>

int factorial(int a)
{
    if(a>1) {
        return a * factorial(a-1);
    }
    else 
        return 1;
}
int main()
{
    int mul = factorial(5);
    printf("Factorial of 5 is %d\n", mul);
    return 0;
}
