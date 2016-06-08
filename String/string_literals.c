#include<stdio.h>
#include<string.h>



int main()
{
    char *str = "yatendra";
    char *str3 = (char *) malloc(sizeof(char) *10);
    char *str4 = (char *) malloc(sizeof(char) *10);
    str3 = "yatendra"
    (*str)++; // this will give seg fault
    (*str3)++; // this will give seg fault
    (*str4)++; // this will not give seg fault
    printf("str = %s\n", str);
    printf("str3 = %s\n", str3);
    printf("str4 = %s\n", str4);
    char str2[] = "yatendra";
    str2[0];
    printf("str2 = %s\n", str2); // this will give seg fault

}
