#include	<stdio.h>

#pragma pack(2)

struct tag {
	char c	:1;
	char dd	:1;
	char ddd:7;
	int i;
	int d;
//	void *ptr;
//	char fdf;
//	double ttr;
//	char hhh;
}__attribute__((packed));


struct box
{
    unsigned int opaque       : 1;
    unsigned int fill_color   : 3;
    unsigned int              : 4; 
    unsigned int show_border  : 1;
    unsigned int border_color : 3;
    unsigned int border_style : 2;
    unsigned int              : 2; 
};

/*struct tag {
	char c	:1;
	char dd	:1;
	char ddd:7;
	int i;
	int d;
//	void *ptr;
//	char fdf;
//	double ttr;
//	char hhh;
};
*/
/*
struct tag {
	char c : 1;
	char dd : 1;
	char id : 1;
	char yy : 1;
	double i;
	int d;
	char iy;
};
*/
int main(void)
{
	struct tag obj;
    struct box box;
	printf("size of struct = %d\n", sizeof(obj));
	printf("size of struct = %d\n", sizeof(struct box));
	return 0;
}
