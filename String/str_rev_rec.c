#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

void str_rev(char **str, char **rev);
int main()
{
	char *str = (char *)malloc(100);
	char *rev = (char *)malloc(100);
	char *ptr;

	printf("\nEnter the string:\t");
	fgets(str, 100, stdin);

	
	ptr = rev;	
	str_rev(&str, &rev);

	printf("\n\nReverse is %s",ptr);

	return 0;
}

void str_rev(char **str, char **rev)
{
        if (*(*str)++) { 
		str_rev(str, rev);
	}
        /*Stack frame clears ,,,,,,tat time it wil come*/
	if (*(--*str)) {
 		*(*rev)++ = *(*str);		
	}
}

