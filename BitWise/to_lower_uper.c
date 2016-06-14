#include<stdio.h>

int tolower(int c){
    if(c >= 'A' && c <= 'Z')
        c |= (1 << 5);
    return c;
}

int touper(int c){
    if(c >= 'a' && c <= 'z')
        c |= (1 << 5);
    return c;
}

int main()
{
    int b = tolower('A');
    int d = touper('a');
    printf("b = %d\n", b);
    printf("b = %c\n", b);
    printf("d = %d\n", d);
    printf("d = %c\n", d);
}
