#include<stdio.h>

int main(){

    printf("%d\n", 1);
    printf("%d\n");
    printf("He got 90%% marks in math\n");
    int c;
    printf("Hello%n world\n",&c);
    printf("%d\n", c);
    /*The %.0d forces compiler to print non negative values. As d is 0, 
    it will not be printed.*/
    int a = 10, b = 20, d = 0;
    printf("%d %d %.0d\n", a, b, d);
    return 0;
}
/*o/p:
1
2147483646
He got 90% marks in math
Hello world
5
10 20 
*/
