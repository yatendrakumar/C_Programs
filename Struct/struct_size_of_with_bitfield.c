#include	<stdio.h>
struct ss {
	char a:2;
	int b;
}ss;
struct A
{
unsigned char c1 : 3;
unsigned char c2 : 4;
unsigned char c3 : 1;
}a;

struct B
{
unsigned char c1 : 1;
unsigned char : 0;
unsigned char c2 : 4;
unsigned char c3 : 1;
}b;

// A structure without forced alignment
struct test1
{
    unsigned int x: 5;
    unsigned int y: 8;
};

// A structure with forced alignment
struct test2
{
    unsigned int x:5;
    unsigned int  :0;
    unsigned int y:8;
};
                  
int main ()
{
	printf ("%d\n", sizeof ( ss ) );
	printf ("%d\n", sizeof ( a ) );
	printf ("%d\n", sizeof ( b ) );
    printf("Size of test1 is %d bytes\n", sizeof(struct test1));
    printf("Size of test2 is %d bytes\n", sizeof(struct test2));
}

	
