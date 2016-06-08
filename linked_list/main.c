#include"linked.h"
#include"my_lib.c"
#include"insert.c"
#include"delete.c"
#include"display.c"
#include"reverse.c"

int main()
{
    int choice = 0, pos = 0;           
    char *buffer = (char *)malloc(sizeof(char)*2);       
    char *pos_s = (char *)malloc(sizeof(char)*5);       
    NODE head = NULL;
    head = head_init(head);
    while(choice != 9) {
        printf("\n\n\tPlease choose from the options\n");
        printf("1-insert node at the begining\n2-insert node at the end\n"
                "3-insert node at given position\n4-delete first node\n"
                "5-delete node at node\n6-delete node from given position\n"
                "7-display the list\n8-Reverse the linked list\n9-Exit\n");
        fgets(buffer, 2, stdin);
        choice = myatoi(buffer);
        switch(choice) {
            case(1):
                head = insert_node_beg(head);
                break;
            case(2):
                head = insert_node_end(head);
                break;
            case(3):
                printf("please provide position where you wants to add node\n");
                clean_stdin();
                fgets(pos_s, 5, stdin);
                pos = myatoi(pos_s);
                head = insert_node_middle(head, pos);
                break;
            case(4):
                head = delete_node_beg(head);
                break;
            case(5):
                head = delete_node_end(head);
                break;
            case(6):
                printf("please provide position from where you wants to delete node\n");
                clean_stdin();
                fgets(pos_s, 5, stdin);
                pos = myatoi(pos_s);
                head = delete_node_middle(head, pos);
                break;
            case(7):
                printf("Displaying nodes\n");
                clean_stdin();
                display_list(head);
                break;
            case(8):
                printf("Reversing linked list\n");
                reverse_list(&head);
                break;
            case(9):
                printf("Exiting\n");
                break;
        }
    }
}

