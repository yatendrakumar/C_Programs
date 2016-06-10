/*U cant initialize globally*/
#include	<stdio.h>
#include	<stdlib.h>

struct str_obj {
	int a;
	int b;
};

struct str_obj obj1; 
struct str_obj obj2 = obj1;

int main()
{
	return 0;
}

