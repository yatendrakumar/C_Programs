#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

void reverse(char *str, int beg, int end);

int main()
{
	char *str = (char *)malloc(100);
	char *ptr;
	int len;
	printf("Enter the string:\t\n");
	fgets(str, 100, stdin);

	reverse(str, 0, (strlen(str) - 1));
	printf("Reverse is %s\n",str);
	return 0;
}

void reverse(char *str, int beg, int end)
{
	char temp;
	if (beg >= end) {
		return;
	}

	temp =	 *(str + beg);
	*(str + beg) = *(str + end);
	*(str + end) = temp;
	beg++;
	end--;
	reverse(str, beg, end);
}	

