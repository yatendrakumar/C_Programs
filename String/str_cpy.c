#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

char * str_cpy(char *src, char *dst);

int
main(void)
{
	char *src, *dst;
	src = (char*)malloc(100);
	dst = (char*)malloc(100);
	
	printf("Enter the String:");
	fgets(src, 100, stdin);
	src[strlen(src) - 1] = '\n';
	dst = str_cpy(src, dst);

	printf("After String Copy: %s", dst);
	return 0;
}

char * str_cpy(char *src, char *dst)
{
	char *ptr = dst;
	while (*ptr++ = *src++) {
		;
	}
	ptr = '\0';
	return dst;
}
