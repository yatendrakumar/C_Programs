#include<stdio.h>
#include<stddef.h>

struct ys {
    int m;
    int x;
    char y;
    char z;
    char member;
};

#define container(ptr, type, member) ({                      \
        const typeof( ((type *)0)->member ) *__mptr = (ptr);    \
                (type *)( (char *)__mptr - offsetof(type,member) );})

#define container1(ptr, type, member) \
    ((type *) (((char *)(ptr))                   \
        - ((char *)(&((type *)0)->member)) ))


int main (){
    int x = ({1; 2;}) + 3;
    printf("%d\n", x);
    x = 5;
    typeof(x) y = 6;
    printf("%d %d\n", x, y);
    printf("Address of %d\n", &((struct ys*)0)->m);
    printf("Address of %d\n", &((struct ys*)0)->x);
    printf("Address of %d\n", &((struct ys*)0)->y);
    printf("Address of %d\n", &((struct ys*)0)->z);
    printf("Address of %d\n", &((struct ys*)0)->member);

    struct ys test;
    float *ptr = &test.member;
    printf("Struct member address %p\n", ptr);
    printf("%p \n", container(ptr, struct ys, member));
    printf("%p \n", container1(ptr, struct ys, member));
}
