#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

char * strn_cpy(char *src, char *dst, int no);

int
main(void)
{
	char *src, *dst, *num;
	src = (char*)malloc(100);
	dst = (char*)malloc(100);
	num = (char*)malloc(100);
	int no;

	printf("Enter the String:");
	fgets(src, 100, stdin);
	src[strlen(src) - 1] = '\n';
	
	printf("Enter the No:");
	fgets(num, 100, stdin);
	num[strlen(num) - 1] = '\n';
	
	no = atoi(num);

	dst = strn_cpy(src, dst, no);

	printf("After String Copy: %s", dst);
	return 0;
}

char * strn_cpy(char *src, char *dst, int no)
{
	char *ptr = dst;
	while ((*ptr++ = *src++) && (--no)) {
		;
	}
	ptr = '\0';
	return dst;
}
