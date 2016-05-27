#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

void palindrome(char *str);
int main()
{
	char *str = (char *)malloc(100);
	char *rev;

	printf("\nEnter the string:\t");
	fgets(str, 100, stdin);
	str[strlen(str) - 1] = '\0';
	palindrome(str);

	return 0;
}

void palindrome(char *beg)
{
	char *end = beg;
        end = (end + strlen(beg));

	while (beg > end) {
		if(*beg != *end) {
			printf("Not palindrome");
			return;
		} 
		++beg;
		--end;
	}
	printf("Palindrome");
}    		  
