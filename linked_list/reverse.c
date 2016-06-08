#include"linked.h"


void reverse_list(NODE *head) 
{
    NODE prev = NULL, node = *head, next;
    while(node != NULL) {
        next = node->left;
        node->left = prev;
        prev = node;
        node = next;
    }
    *head = prev;
}
