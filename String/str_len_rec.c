#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

void str_len(char **str, int *len);
int main()
{
	


	char *str = (char *)malloc(100);
	int *len , i = 0;
	len = &i;


	printf("\nEnter the string:\t");
	fgets(str, 100, stdin);

	
	str_len(&str, len);

	printf("\n\nLength of a string is %d",len);

	return 0;
}

void str_len(char **str, int *len)
{
       if (*(*str)++) {
	        ++(*len);
		printf("Len %d",*len);
		str_len(str, len);
	}
}
