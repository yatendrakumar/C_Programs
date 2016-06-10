#include <stdio.h>
struct Sanjay {
    int a;
    int b;
    char d;
    char g;
    struct San {
        int y;
        char z;
    }v;
    enum Test {Movie, roll}s;
    char e;
    int f;
};
struct employee
{
    int     emp_id;
    int     name_len;
    char    name[0];
};
struct test
{
    unsigned int x;
    unsigned int y: 33;
    unsigned int z;
};
int main(){
    static int d;
    struct Sanjay s;
    struct employee emp;
    printf("size of s struct = %d\n", sizeof(s));
    printf("size of s.v = %d\n", sizeof(s.v));
    printf("size of s.s = %d\n", sizeof(s.s));
    printf("size of emp struct = %d\n", sizeof(emp));
    printf("size of emp name array = %d\n", sizeof(emp.name));
    printf("size of roll = %d\n", roll);
    printf("size of test struct %d", sizeof(struct test));
}

/*Ans:
size  = 32
size  = 8
size  = 4
size  = 1
*/
