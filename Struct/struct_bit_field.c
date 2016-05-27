#include	<stdio.h>

struct abc{
	char a  : 1;
	struct cde {
		char b : 1;
		int c;
	};
};

struct abc2{
	char a  : 1;
	char b  : 1;
	struct cde2 {
		char b : 1;
		int c;
	}d;
};

int main()
{
	struct abc obj2;
    struct abc2 obj3;
	struct cde obj1;
	printf("Size of obj2  = %d\n", sizeof(obj2));
	printf("Size of obj3 with inbuilt struct obj  = %d\n", sizeof(obj3));
	printf("Size of obj1 = %d\n", sizeof(obj1));
	return 0;
}	
 
