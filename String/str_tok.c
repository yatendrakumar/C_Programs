/***************************************************************************************
 * 		Function to implement the strtok program
 * 							Author :- Disen CD
 * 							Date   :- 26th Oct 2012
 ***************************************************************************************/

#include	<stdio.h>
#include	<stdlib.h>
#include	<string.h>

char *str_tok(char *str, char *del);
int main(void)
{
	char *str = '\0';
	char *tok = '\0';
	char *del = '\0';
	
	/*Allocating memory for str*/
	if (NULL == (str = malloc(sizeof(char) * 100))) {
		perror("Malloc");
		exit(EXIT_FAILURE);
	}
	/*Allocating mem for del*/
	if (NULL == (del = malloc(sizeof(char) * 100))) {
		perror("Malloc");
		exit(EXIT_FAILURE);
	}

	fprintf(stdout, "\nEnter the string\n\t\t");
	fgets(str, 100, stdin);
	str[strlen(str) - 1] = '\0';

	fprintf(stdout, "\nEnter the Delimeter\n\t\t");
	fgets(del, 100, stdin);
	del[strlen(del) - 1] = '\0';

	tok = str_tok(str, del);

	
	fprintf(stdout, "\nStrtok is \n\t\t: %s", tok);

	return 0;
}

char *str_tok(char *str, char *del)
{
	char *tmp_str = str;
	char *tmp_str1 = malloc(100);
	char *tok = malloc(100);
	char *tmp_del = del;
	int flag = 0;

	while (*tmp_str != '\0') {
	
		*tmp_str1++ = *tmp_str;
		if (*tmp_str == *tmp_del) {
			*tmp_del++;
			if (*tmp_del == '\0') {
				tok = tmp_str;
				*tmp_del = del;
				tmp_str = '\0';
			        return tok;	
			}
		} 
		*tmp_str++;
	}
	return 0;
}
