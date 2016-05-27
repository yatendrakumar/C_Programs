/****************************************************************************
 * In union memory will be sharing so that st1 and st2 will  have 8 byte.
 * 00000000 00000000 00000001 00000010  ut.st2.i = 258 ut.st.j = 0
 * **************************************************************************/ 
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	union {
		struct	{
			char c;
			char ch;
		}st1;

		struct	{
			int i;
			int j;
		}st2;
	} ut = {129, 1};
//	 ut = {.st2= {128, 1}};
//	 ut = {.st1= {127, 1}};
//	 ut = {1, 0};
    printf("%d\n", sizeof(ut.st1));
	printf("%d\t %d\n", ut.st2.i, ut.st2.j);
	printf("%d\t %d\n", ut.st1.c, ut.st1.ch);

	return 0;
}
