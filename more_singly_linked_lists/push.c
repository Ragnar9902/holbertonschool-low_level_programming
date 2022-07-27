#include "lists.h"
#include <stdlib.h>

/**
 * push - Given a reference (pointer to pointer) to the head of a list and
 * an int, inserts a new node on the front of the list.
 * @head_ref : pointer to the head of the list
 * @new_data : integer to storage in the new node of the list
 *
 * Return : void
 */

void push(struct listint_s **head_ref, int new_data)
{
    /* 1. allocate node */
	struct listint_s *new_node = (struct listint_s *)malloc(sizeof(struct listint_s));

    /* 2. put in the data  */
	new_node->n  = new_data;

    /* 3. Make next of new node as head */
	new_node->next = (*head_ref);

    /* 4. move the head to point to the new node */
	(*head_ref)    = new_node;
}
