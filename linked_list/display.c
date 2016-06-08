#include"linked.h"

void display_list(NODE head)
{
    NODE node;
    node = head;
    if(check_elements(head))
        while(node != NULL){
            printf("%s", node->data);
            node = node->left;
        }
}

int check_empty(NODE head)
{
    if(head == NULL){
        printf("List is empty\n");
        return 0;
    }
    return 1;
}

int check_elements(NODE head)
{
    check_empty(head);
    if(check_empty(head)) {
        if (head->left == NULL) {
            printf("No Elements\n");
            return 0;
        }
    }
    return 1;
}

NODE smalloc(NODE node)
{
    node = (NODE)malloc(sizeof(struct node));
    if(node != NULL)
        return node;
    else 
        perror("Node Allocation");
}

char *cmalloc(char *string)
{
    string = (char *)malloc(sizeof(char)*30);
    if(string != NULL)
        return string;
    else 
        perror("data Allocation");
}

