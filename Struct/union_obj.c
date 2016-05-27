#include	<stdio.h>

union tag {
	char a[10];
	char b;
}obj1;

int main()
{
	strcpy(obj1.a , "disen");
	printf("\n%s\n", obj1.a);
	printf("\n%c\n", obj1.b);
	return 0;
}


