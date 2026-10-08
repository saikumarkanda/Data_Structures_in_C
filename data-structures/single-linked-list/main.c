#include <stdio.h>
#include "singlle_linked_list.h"

int main(void)
{
    struct node *head = NULL;

    printf("Creating Linked List...\n");

    for (int i = 0; i < MAX_NODES; i++)
    {
        add_node(&head);

        if (head == NULL)
        {
            printf("Failed to create node\n");
            return 1;
        }
    }

    printf("\nOriginal List:\n");
    print_node(head);

    printf("\nReversing List...\n");
    reverse_list(&head);

    printf("\nReversed List:\n");
    print_node(head);

    return 0;
}
