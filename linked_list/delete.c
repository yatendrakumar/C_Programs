#include"linked.h"

NODE delete_node_beg(NODE head) 
{
    printf("deleting node at begning\n");
    clean_stdin();
    if(check_elements(head))
        if(head->left != NULL){
            head->left = head->left->left;
        } 
    return head;
}

NODE delete_node_end(NODE head) 
{
    NODE prev;
    NODE node = head;
    prev = node;
    clean_stdin();
    if(check_elements(head))
        while(node->left != NULL){
            prev = node;
            node = node->left;
        }
    prev->left = NULL;
}

NODE delete_node_middle(NODE head, int position) 
{
    NODE node, prev;
    node = head;
    prev = node;
    int count = 0;
    if(position < 1) {
        printf("Given postion doesn't exist\n");
        return head;
    }
    if(check_elements(head))
        while(count != position) {
            if(node->left != NULL) {
                prev = node;
                node = node->left;
                count++;
            } else 
                break;
        }
    if(count != position)
        printf("Data can't be deleted from given location\n");
    else {
        prev->left = prev->left->left;
    }
    return head;
}
