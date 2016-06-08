#include<stdio.h>

#define sizeoff(a) ((char *)(&a + 1) - (char *)&a)

// this is depend on exec.c function
// please run ./a.out (executable of exec.v) with executable name of this file
// usage : ./a.out str

size_t str_len(const char *str)
{   
    size_t n=0;
    if(str == (char *)0)
        return 0;
/*    while(*str != '\0') {
        n++;
        str++;
    }
*/
    for(; str[n]; n++);
    return n-1;
}

int myatoi(char *str)
{
    int n=0, i;
//    if(*str == '"' && *(str+str_len(str)) == '"') {
        for( i = 0; ((*(str+i) != '\0') && (*(str+i) >= '0') && (*(str+i) <='9')) ; i++) {
            if (isdigit(*(str+i)))
                n = (n*10) + (*(str+i) - '0');
            else 
                break;
        }
//    }
    return n;
}

int main(int argc, char *argv[])
{
    char *str;
    size_t length = 0;
    // disabled malloc as now getting command line argument from exec.c file
//    str = (char *) malloc(sizeof(char)*20);
//    str = &argv[1];
    str = argv[1];
//    fgets(str, 20, stdin);
    length = str_len(str);
    printf("Length = %d\n", length);
    int n = myatoi(str);
    printf("Str to int = %d\n", n);
    n = atoi(str);
    printf("Str to int = %d\n", n);
    return 0;
}

