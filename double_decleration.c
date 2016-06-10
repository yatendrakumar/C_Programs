#include<stdio.h>

int a=10;
// int a=8; // this will create  error: redefinition of ‘a’
int a; // weak decleration/type

int main(){
    int a;
//    a = 20;
    printf("a = %d\n", a);
    return 0;
}
