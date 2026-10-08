/****************************************************
 * 	
 * 	file:	single_linked_list.h
 *
 * 	Author:	Kumar Kanda
 *
 * 	Description:	Header file for singly linked list
 *
***************************************************/ 
#ifndef SINGLE_LINKED_LIST_H
#define SINGLE_LINKED_LIST_H

#include<stdio.h>
#include<stdlib.h>
#include "errno.h"

struct node{
	unsigned int id;
	unsigned int data;
	struct node *next;
};

struct node *create_node(struct node *ptr);
struct node *get_data(struct node *dt_ptr);
struct node *print_node(struct node *pr_ptr);
struct node *add_node(struct node **ptr);
struct node *insert_node(struct node **hptr,
                         struct node **sptr,
                         int pl);
struct node *delete_node(struct node **hptr, 
                         int pl);
struct node *reverse_list(struct node **hptr);


#define MAX_NODES 10	//Number of nodes the list can conatin

#endif	/* SINGLE_LINKED_LIST_H */
