#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

void str_rev(char *str);
int main()
{
	char *str = (char *)malloc(100);
	char *rev;

	printf("\nEnter the string:\t");
	fgets(str, 100, stdin);

//	rev = str_rev(str);
	str_rev(str);

	printf("\n\nReverse is %s",str);

	return 0;
}

void str_rev(char *str)
{
	char *rev = (char *)malloc(100);
	char *ptr = rev;
	int x = 20;

      	str = str + strlen(str) - 1;

//	while (*rev++ = *str--);
	while (x--) 
		printf("%c\n", *str--);
			//*rev++ = *str--);
	
//	*rev = '\0';
	
//	return ptr;
}    		  
	


