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
int main ()
{
	printf ("%d\n", sizeof ( ss ) );
	printf ("%d\n", sizeof ( a ) );
	printf ("%d\n", sizeof ( b ) );

}

	
