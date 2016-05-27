#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

char * str_cat(char *src, char *dst);

int
main(void)
{
	char *src, *dst, *num;
	src = (char*)malloc(100);
	dst = (char*)malloc(100);
	num = (char*)malloc(100);
	int no;

	printf("Enter the 1st String:");
	fgets(src, 100, stdin);
	src[strlen(src) - 1] = '\0';
	
	printf("Enter the 2nd String:");
	fgets(dst, 100, stdin);
	dst[strlen(dst) - 1] = '\0';

	src = str_cat(src, dst);

	printf("After String Concatanation: %s", src);
	return 0;
}

char * str_cat(char *src, char *dst)
{
	char *ptr = src;

	while (*ptr++);
	*ptr--;

	while (*ptr++ = *dst++);
	ptr = '\0';

	return src;
}
