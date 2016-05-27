#include	<stdio.h>
struct ss {
	char a:2;
	int b;
}ss;
int main ()
{
	printf ("%d\n", sizeof ( ss ) );

}

	
