#include	<stdio.h>

#pragma pack(1)

struct tag {
	char a		:1;
	char b		:1;
	char c		:1;
	char d		:1;
	char e		:1;
	char f		:1;
	char g		:1;
	char h		:1;
	char i		:1;
	char j		:1;
	char k		:1;
	char l		:1;
	char m		:1;
	char o		:1;
	char p 		:1;
	char q		:1;
};

int main(void)
{
	struct tag obj;
	printf("size of struct = %d\n", sizeof(obj));
	printf("size of struct = %d\n", sizeof(struct tag));
	return 0;
}
