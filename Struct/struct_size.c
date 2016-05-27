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
int main(){
    static int d;
    struct Sanjay s;
    printf("size  = %d\n", sizeof(s));
    printf("size  = %d\n", sizeof(s.v));
    printf("size  = %d\n", sizeof(s.s));
    printf("size  = %d\n", roll);
}

/*Ans:
size  = 32
size  = 8
size  = 4
size  = 1
*/
