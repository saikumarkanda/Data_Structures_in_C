/****************************************************
 *
 * File        : single_linked_list.c
 * Author      : Kumar Kanda
 * Description : Function definitions for a
 *               Singly Linked List
 *
 ****************************************************/

#include "single_linked_list.h"

static unsigned int nodes_count = 0;

/* Create a new node */
struct node *create_node(struct node *hptr)
{
    struct node *new_node = malloc(sizeof(struct node));

    if (new_node == NULL)
    {
        printf("Failed to create a new node\n");
        return ENPTR;
    }

    get_data(new_node);
    nodes_count++;

    return new_node;
}

/* Initialize node data */
struct node *get_data(struct node *dt_ptr)
{
    static int count = 100;
    static int node_id = 0;

    if (dt_ptr == NULL)
    {
        printf("Null pointer passed to get_data()\n");
        return ENPTR;
    }

    dt_ptr->id = node_id++;
    dt_ptr->data = count;
    dt_ptr->next = NULL;

    count += 120;

    return dt_ptr;
}

/* Print all nodes in the list */
struct node *print_node(struct node *pr_ptr)
{
    if (pr_ptr == NULL)
    {
        printf("List is empty\n");
        return ENPTR;
    }

    while (pr_ptr != NULL)
    {
        printf("ID = %d\tDATA = %d\n",
               pr_ptr->id,
               pr_ptr->data);

        pr_ptr = pr_ptr->next;
    }

    return NULL;
}

/* Add node at the end of the list */
struct node *add_node(struct node **hptr)
{
    struct node *ptr = *hptr;

    if (ptr == NULL)
    {
        *hptr = create_node(NULL);
        return *hptr;
    }

    while (ptr->next != NULL)
    {
        ptr = ptr->next;
    }

    ptr->next = create_node(ptr);

    return *hptr;
}

/* Insert a node at a particular position
 *
 * pl = 0  : insert at beginning
 * pl < 0  : insert at end
 * pl > 0  : insert at specified position
 */
struct node *insert_node(struct node **hptr,
                         struct node **sptr,
                         int pl)
{
    unsigned int i;
    struct node *trav_ptr = *hptr;

    if (pl == 0)
    {
        (*sptr)->next = *hptr;
        *hptr = *sptr;
    }
    else if (pl < 0)
    {
        while (trav_ptr->next != NULL)
        {
            trav_ptr = trav_ptr->next;
        }

        trav_ptr->next = *sptr;
    }
    else
    {
        for (i = 0; i < (pl - 1); i++)
        {
            trav_ptr = trav_ptr->next;
        }

        (*sptr)->next = trav_ptr->next;
        trav_ptr->next = *sptr;
    }

    return *hptr;
}

/* Delete a node
 *
 * pl = 0  : delete first node
 * pl < 0  : delete last node
 * pl > 0  : delete specified position
 */
struct node *delete_node(struct node **hptr, int pl)
{
    unsigned int i;
    struct node *trav_ptr = *hptr;
    struct node *del_ptr = NULL;

    if (*hptr == NULL)
    {
        return ENPTR;
    }

    if (pl > (int)nodes_count)
    {
        pl = -1;
    }

    if (pl == 0)
    {
        del_ptr = *hptr;
        *hptr = (*hptr)->next;
    }
    else if (pl < 0)
    {
        while (trav_ptr->next->next != NULL)
        {
            trav_ptr = trav_ptr->next;
        }

        del_ptr = trav_ptr->next;
        trav_ptr->next = NULL;
    }
    else
    {
        for (i = 0; i < (pl - 1); i++)
        {
            trav_ptr = trav_ptr->next;
        }

        del_ptr = trav_ptr->next;
        trav_ptr->next = trav_ptr->next->next;
    }

    free(del_ptr);
    nodes_count--;

    return *hptr;
}

/* Reverse the linked list */
struct node *reverse_list(struct node **hptr)
{
    struct node *prev_node = NULL;
    struct node *current_node = *hptr;
    struct node *next_node = NULL;

    if (*hptr == NULL)
    {
        return ENPTR;
    }

    while (current_node != NULL)
    {
        next_node = current_node->next;
        current_node->next = prev_node;
        prev_node = current_node;
        current_node = next_node;
    }

    *hptr = prev_node;

    return *hptr;
}
