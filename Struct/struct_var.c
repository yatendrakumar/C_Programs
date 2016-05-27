#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	struct {
		struct	{
			char c;
			char ch;
		}st1;

		struct	{
			int i;
			int j;
		}st2;
	} ut = {2, 1, 3, 4};
//	} ut = {2, 1};

	printf("%d\t %d\n", ut.st2.i, ut.st2.j);
	printf("%d\t %d\n", ut.st1.c, ut.st1.ch);

	return 0;
}
