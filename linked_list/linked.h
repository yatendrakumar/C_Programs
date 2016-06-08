
#ifndef __LINKED__
#define __LINKED__

#include<stdio.h>
#include<stdlib.h>
#include <stdbool.h>

struct node {
    char *data;
    struct node *left;
    struct node *right;
};

typedef struct node *NODE;
void display_list(NODE head);
int myatoi(char *str);
int check_empty(NODE head);
int check_elements(NODE head);
void clean_stdin(void);
NODE smalloc(NODE node);
char *cmalloc(char *string);
void reverse_list(NODE *head);
NODE head_init(NODE head);
NODE insert_node_beg(NODE head);
NODE insert_node_end(NODE head);
NODE delete_node_beg(NODE head);
NODE delete_node_end(NODE head);
NODE insert_node_middle(NODE head, int position);
NODE delete_node_middle(NODE head, int position);
void insert_node(NODE snode, NODE dnode, char *data);
#endif
