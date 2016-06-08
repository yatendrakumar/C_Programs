#include"linked.h"

NODE insert_node_beg(NODE head)
{
    printf("Inserting node at begning\n");
    char *data = cmalloc(data);
    printf("Please provide data to store in list\n");
    clean_stdin();
    fgets(data, sizeof(char)*10, stdin);
    NODE temp = smalloc(temp);
    insert_node(head, temp, data);
    return head;
}

NODE insert_node_end(NODE head) 
{
    printf("Inserting node at end\n");
    NODE node = head;
    if(check_empty(head))
        while(node->left != NULL) 
            node = node->left;
    char *data = cmalloc(data);
    printf("Please provide data to store in list\n");
    clean_stdin();
    fgets(data, sizeof(char)*10, stdin);
    NODE temp = smalloc(temp);
    insert_node(node, temp, data);
    return head;
}

NODE insert_node_middle(NODE head, int position) 
{
    NODE node, prev;
    node = head;
    prev = node;
    int count = 0;
    if(position < 1) { 
        printf("Given postion doesn't exist\n");
        return head;
    }
    if(check_empty(head))
        while(count != position) {
            if(node->left != NULL) {
                prev = node;
                node = node->left;
                count++;
            } else 
                break;
        }
    if(count != position) {
        printf("Data can't be inserted in given location\n");
    } else {
        char *data = cmalloc(data);
        printf("Please provide data to store in list\n");
        fgets(data, sizeof(char)*10, stdin);
        NODE temp = smalloc(temp);
        insert_node(prev, temp, data);
    }
    return head;
}

void insert_node(NODE snode, NODE dnode, char *data)
{
    dnode->data = cmalloc(dnode->data);
    dnode->data = data;
    dnode->left = snode->left;
    dnode->right = snode;
    snode->left = dnode;
}
