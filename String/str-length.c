#include	<stdio.h>
#include	<string.h>
#include	<stdlib.h>

void length(char **, int *);
int main(void)
{
    char *str, *ptr;
    int len = 0;
    // or check !(str == NULL)
    if (!(str = (char *)malloc(sizeof(char) * 50))) {
        perror("Malloc\n");
        exit(EXIT_FAILURE);
    }
    printf("Enter any string\n");
    fgets(str, 50, stdin);
    *(str + strlen(str) - 1) = '\0';

    ptr = str; 
    length(&str, &len);

    printf("Length is:  %d\n", len);
    free(ptr);
    ptr = NULL;
    return 0;
}

void length(char **str, int *len)
{
    if (*(*str)++) {
        ++*len;
        length(str, len);
    }
}
