#include"linked.h"

int myatoi(char *str)
{
    int n=0, i;
    for( i = 0; ((*(str+i) != '\0') && (*(str+i) >= '0') && (*(str+i) <='9')) ; i++) {
        if (isdigit(*(str+i)))
            n = (n*10) + (*(str+i) - '0');
        else 
            break;
    }
    return n;
}

NODE head_init(NODE head)
{
    if(head == NULL) {
        head = (NODE )malloc(sizeof(struct node));
        head->data = "Start\n";
        head->left = NULL;
        head->right = NULL;
    }
    return head;
}

void clean_stdin(void)
{
    int c;
    do {
        c = getchar();
    } while (c != '\n' && c != EOF);
}
