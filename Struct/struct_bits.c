#include <stdio.h>
struct marks {
    int a:3;
    int b:3;
    unsigned int c:4;
    int d:4;
    unsigned int e:4;
};

/* 2: 00000010 (Select three two bit)
 * 6: 00000110
 * -6: 11111001+1=11111010
 */ 

int main() {
    struct marks m={2,-6,10,10,-6};
    printf("values = %d %d %d %d %d\n", m.a, m.b, m.c, m.d, m.e);
    return 0;
}

/*
Ans:
Ans: values = 2 2 10 -6 10
*/
