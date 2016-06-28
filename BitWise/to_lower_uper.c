#include<stdio.h>

int tolower(int c){
    if(c >= 'A' && c <= 'Z')
        c |= (1 << 5); // ASCII value of A is 65 change it to 97 'a' i.e add 32 bit
    return c;
}

int touper(int c){
    if(c >= 'a' && c <= 'z')
        c &= (0xffffffdf); // unset 6 bit i.e subtract 32
//        c -= (0x20); // unset 6 bit i.e subtract 32
//        c |= (~(1<<5)+1); not correct
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
