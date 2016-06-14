#include<stdio.h>
int add(int x,int y){
    int a,b;
    do{
        a=x&y;
        b=x^y;
        x=a<<1;
        y=b;
    } while(a);
    return b;
}

// 2's compliment
int negate(int x) {
    return add(~x,1);
}

int sub(int x, int y) {
    return add(x,negate(y));
}

int mul(int x, int y){
    int a = 1, b = 0;
    if(x<0)
        x=negate(x);
    if(y<0)
        y= negate(y);
    while(x>=a && y) {
        if(x&a) b=add(y,b);
        y <<= 1; a<<= 1;
    }
    return b;
}

int div(int x, int y){
    int c = 0, sign = 0;
    if(x<0) {
        x=negate(x);
        sign ^= 1;
    }
    if(y<0) {
        y= negate(y);
        sign ^= 1;
    }
    if(y!=0){
        while(x>=y){
            x = sub(x,y);
            ++c;
        }
    }
    if (sign) {
        c = negate(c);
    }
    return c;
}
int main()
{
    int division = div(-90,-9);
    int multiple = mul(-10,9);
    printf("div = %d\n", division);
    printf("mul = %d\n", multiple);
}

