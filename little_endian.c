#include	<stdio.h>


union {			
	int i;
	char ch;
} obj;

int main ()
{
/*	int num = 1;
	if(*(char *)&num == 1)
	{
		printf("\nLittle-Endian\n");
	}
	else
	{
		printf("Big-Endian\n");
	}
*/
	obj.i = 1;
	if (obj.i == obj.ch) {
		printf("\nLittle-Endian\n");
	} else {
		printf("Big-Endian\n");
	}
	return 0;
}
